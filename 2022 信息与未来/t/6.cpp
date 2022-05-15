#include <bits/stdc++.h>
using namespace std;

int dp[2005][2005],n,sum;

int main(){
  cin >> n>> sum;
  dp[0][0] = 1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=6;j++)
    {
      for(int k=j;k<=sum;k++)
      {
        dp[i][k] =  (dp[i][k] + dp[i-1][k-j] ) % 1000000007;
      }
    }
  }
  cout << dp[n][sum];
  return 0;
}








