#include <iostream> 
#include <iomanip> 
#include <vector>
using namespace std;

void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<setw(2)<<v[i]<<" ";
	cout<<endl;	
}

// 选择若干不相邻的数，使得总和最大 
int Solve(int a[],int n)
{
	vector<int> dp(n, 0);
	vector<int> choice(n, 0);
	dp[0]=a[0];
	if(a[0]>a[1])
		dp[1]=a[0];
	else
		dp[1]=a[1];
	for(int i=2; i<n; i++)
	{
		// dp[i]=  dp[i-2] dp[i-1]=?
		if(dp[i-2]+a[i] > dp[i-1])
			dp[i]=dp[i-2]+a[i], choice[i]=a[i]; // 选择a[i] 
		else
			dp[i]=dp[i-1];      // 不选择a[i] 
	}
	Output(dp);
	Output(choice);
	// 追溯每一步的选择
	
	return dp[n-1];
} 

int main()
{
	int a[]={1,2,4,1,7,8,3}, n=7;
	int maxsum=Solve(a,n); 
	cout<<maxsum<<endl;	
	return 0;
}
