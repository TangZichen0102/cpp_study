#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <stack> 
using namespace std;
/*
5个数选3个数的选排列 
    1 2 3 4 5 
    1 2 3： 6个 
    1 2 4： 6个 
    1 2 5： 6个 
    1 3 4： 6个 
    1 3 5： 6个 
    1 4 5： 6个 
    
	2 3 4： 6个 
    2 3 5： 6个 
    2 4 5： 6个 
    
	3 4 5： 6个 
*/
void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
int  Search(vector<int> &v, int x)
{
	for(int i=0; i<v.size(); i++)
		if(v[i]==x)
			return i;
	return -1;
}
int cnt=0;
// 在a[0]...a[n-1]中选k个数,存入b，
// 此刻，正在决定第ith个数是谁 
void Solve(int a[],int n,int k, int ith, vector<int> &b)
{
	if(ith==k) 
	{
		cnt++;   cout<<cnt<<":  ";
		Output(b);   // 最终方法
	}
	else
	{
		// 分解策略 :正在决定第ith个数是谁 
		for(int i=0; i<n; i++)
		{
			if( Search(b,a[i])!=-1 )  continue;  // 避免重复数 
			if( b.empty()==false && b.back() > a[i] )  continue;  // 保证递增
			b.push_back(a[i]);
			Solve(a,n,k, ith+1, b);
			b.pop_back();
		}
	}
}

int main()
{
	int a[]={1,2,3,4,5}, n=5, k=3;
	vector<int> b;
	Solve(a,n,k, 0, b);
	return 0;
}





