#include<bits/stdc++.h>
using namespace std;
int dp[101][101][101];
int main(){
	int n,str,cir;
	cin>>n>>str>>cir;
	if(str < cir)
	{
		cout<<0<<endl;
		return 0;
	}
	for(int i=0; i<=100; i++)
		for(int j=0; j<=100; j++)
			for(int k=0; k<=100; k++)
				dp[i][j][k]=10000;
	dp[n][str][str]=0;
	for(int i=n; i>=1; i--)
		  for(int j=str; j>=0; j--)
		    for(int k=str; k>=0; k--)
		      for(int times=1; times<=10; times++)
		        {
		        	int ptimes=times*times;
			      	if(j >= ptimes && k >= times) 
				  		dp[i][j-ptimes][k-times]=min(dp[i][j-ptimes][k-times], dp[i][j][k]+1);
			      	if(k >= ptimes) 
					  	dp[i-1][k-ptimes][k-times]=min(dp[i-1][k-ptimes][k-times], dp[i][j][k]+1); 
				}
	int minn=INT_MAX;
	for(int i=1; i<=n; i++)
	    for(int j=0; j<=str; j++)
        	minn=min(minn,dp[i][j][str-cir]);
	cout<<minn<<endl;
	return 0;
}
