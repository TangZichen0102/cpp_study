#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
// 多重背包：每样物品，可以选择0次或多次 
/* 动态规划的思路：一步一步的走 
vs[]: 3,8,7,12 
  V:    0  1  2  3  4  5  6  7  8  9  10  11  12  13
dp[]:   0  0  0  3  3  3  6  7  8  9  10  11  12  13
   dp[6]= a[0]+dp[6-a[0]]=3+dp[3]=6
   dp[7]= max{a[0]+dp[7-a[0]]=3+dp[4]=6,
		      a[2]+dp[7-a[2]]=7+dp[0]=7}  =7
   dp[8]= max{a[0]+dp[8-a[0]]=3+dp[5]=6,
		      a[1]+dp[8-a[1]]=8+dp[0]=8, 
		      a[2]+dp[8-a[2]]=7+dp[1]=7}  =8
   dp[9]= max{a[0]+dp[9-a[0]]=3+dp[6]=9,
		      a[1]+dp[9-a[1]]=8+dp[1]=8, 
		      a[2]+dp[9-a[2]]=7+dp[2]=7}  =9
   dp[10]=max{a[0]+dp[10-a[0]]=3+dp[7]=10,
		      a[1]+dp[10-a[1]]=8+dp[2]=8, 
		      a[2]+dp[10-a[2]]=7+dp[3]=10} =10
   dp[11]=max{a[0]+dp[11-a[0]]=3+dp[8]=11,
		      a[1]+dp[11-a[1]]=8+dp[3]=11, 
		      a[2]+dp[11-a[2]]=7+dp[4]=10} =11
   dp[12]=max{a[0]+dp[12-a[0]]=3+dp[9]=12,
		      a[1]+dp[12-a[1]]=8+dp[4]=11, 
		      a[2]+dp[12-a[2]]=7+dp[5]=10,
		      a[3]+dp[12-a[3]]=12+dp[0]=12} =12
   dp[13]=max{a[0]+dp[13-a[0]]=3+dp[10]=13,
		      a[1]+dp[13-a[1]]=8+dp[5]=11, 
		      a[2]+dp[13-a[2]]=7+dp[6]=13,
		      a[3]+dp[13-a[3]]=12+dp[1]=12} =13
*/
void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<setw(2)<<v[i]<<" ";
	cout<<endl;	
}

//已知物品的体积vs[0]....vs[n-1], 求背包V的最大装载量
int Solve(int vs[],int n, int V)
{
	vector<int> dp(V+1, 0);  // 初始化 
	vector<int> prev(V+1, -1);  // 记住上一个背包 
	for(int v=0; v<=V; v++)
	{
		// 计算dp[v]=?
		for(int i=0; i<n; i++)   // 选择物品 
		{
			if(vs[i]>v)   continue;  // vs[i]放不进来 
			if(vs[i] + dp[v-vs[i]] > dp[v]) 
				dp[v] = vs[i] + dp[v-vs[i]],  prev[v]=v-vs[i];    // 剩余空间的最优解：dp[v-vs[i]] 
		}
	}
	Output(dp);
	Output(prev);
	int p=V;  // p当前背包 
	while(prev[p]!=-1)
	{
		cout<< p - dp[prev[p]] <<" ";  // 当前背包 -上一个背包 = 本次的选择 
		p=prev[p];
	}
	return dp[V];
}
int  main()
{
	int vs[4]={3,8,7,12}, n=4;
	int V=13;
	int max=Solve(vs,n, V);  // 13=3+3+7
	cout<<max<<endl;
}
