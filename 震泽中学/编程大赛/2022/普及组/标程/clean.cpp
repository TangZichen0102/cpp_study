/*
10
4 3 4 1 1 1 4 1 1 4
2 3 6 4 2 2 5 2 3 2
5
2 4 1 4 5
2 1 3 4 1
*/
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int n,a[1005],b[1005];
int f[1005][4005],ans=0x7fffffff;
int main() {
	freopen("clean.in","r",stdin);
	freopen("clean.out","w",stdout);
	scanf("%d",&n);
	memset(f,127/3,sizeof(f));
	for(int i=1; i<=n; i++)scanf("%d",&a[i]);
	for(int i=1; i<=n; i++)scanf("%d",&b[i]);
	f[0][0]=0;
	for(int i=1; i<=n; i++)
		for(int j=0; j<=4000; j++)
			if(j>=a[i])
				f[i][j]=min(f[i-1][j]+b[i],f[i-1][j-a[i]]);
			else f[i][j]=f[i-1][j]+b[i];
	for(int i=0; i<=4000; i++)
		ans=min(ans,max(f[n][i],i));
	printf("%d",ans);
	return 0;
}
