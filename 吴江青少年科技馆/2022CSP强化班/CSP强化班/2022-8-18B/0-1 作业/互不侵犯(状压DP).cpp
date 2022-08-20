#include<bits/stdc++.h>
using namespace std;
long long dp[15][2000][180],ans;
int num[160],s[160];
int n,k,cnt;
int main() {
	cin>>n>>k;
	cnt=0;
	for(int i=0; i <= (1<<n)-1; i++) 
	{
		if(i&(i<<1))continue;
		int sum=0;
		for(int j=0; j < n; j++)
			if(i&(1<<j))++sum;
		cnt++;
		s[cnt]=i;
		num[cnt]=sum;
	}
	dp[0][1][0]=1;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=cnt; j++)
			for(int p=0; p<=k; p++)
				if(p>=num[j])
					for(int t=1; t<=cnt; t++)
						if(!(s[t]&s[j]) && !(s[t]&(s[j]<<1)) && !(s[t]<<1&(s[j])))
							dp[i][j][p]+=dp[i-1][t][p-num[j]];
	for(int i=1; i<=cnt; i++)
		ans+=dp[n][i][k];
	cout<<ans;
	return 0;
}