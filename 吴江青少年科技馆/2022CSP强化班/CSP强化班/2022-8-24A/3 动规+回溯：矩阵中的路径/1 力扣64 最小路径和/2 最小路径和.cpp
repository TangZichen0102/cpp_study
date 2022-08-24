#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#define N 10
#define min(x,y) (x)<(y)?(x):(y)

void Output(int M[N][N],int m,int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<setw(2)<<M[i][j]<<" ";
		cout<<endl;
	}
}

int Solve(int M[N][N],int m,int n)
{
	int dp[N][N]={0}, i,j;
	dp[0][0]=M[0][0];
	for(j=1; j<n; j++)	dp[0][j]=dp[0][j-1]+M[0][j]; // 第0行上的累加 
	for(i=1; i<m; i++)	dp[i][0]=dp[i-1][0]+M[i][0]; // 第0列上的累加 
	for(i=1; i<m; i++)
		for(j=1; j<n; j++)	
			if(dp[i][j-1]<dp[i-1][j])
				dp[i][j]=dp[i][j-1]+M[i][j]; // 接在左侧之后 
			else
				dp[i][j]=dp[i-1][j]+M[i][j]; // 接在上侧之后
	Output(dp,m,n);
	return dp[m-1][n-1];
}
int main()
{
	freopen("data.txt", "r", stdin);
	int M[N][N];
	int i,j, m,n;	cin>>m>>n;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)	
			cin>>M[i][j];
	int min=Solve(M,m,n);
	cout<<min<<endl;
    return 0;
}
