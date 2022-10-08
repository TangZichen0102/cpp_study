#include<bits/stdc++.h>
using namespace std;
const int M=1010;
typedef long long LL;
int n,m,d,k;
int a[M][M];
void cal(int x,int y){
	LL ans=0;
	int x1=max(1,x-d),x2=min(m,x+d);
	int y1=max(1,y-d),y2=min(m,y+d);
	for(int i=x1;i<=x2;++i)
		for(int j=y1;j<=y2;++j)
		{
			if(abs(i-x)+abs(j-y)<=d && a[i][j]) {
				if(a[i][j]<=k){
					ans+=a[i][j];
					a[i][j]=0;
				}
				else{
					ans+=k;
					a[i][j]-=k;
				}
			}
		}
	printf("%lld\n",ans);
}
int main(){
	freopen("candy.in","r",stdin);
	freopen("candy.out","w",stdout);
	cin>>n>>m>>d>>k;
	for(int i=1;i<=m;++i)
		for(int j=1;j<=m;++j)
			scanf("%d",&a[i][j]);
	while(n--){
		int x,y;
		scanf("%d%d",&x,&y);
		cal(x,y);
	}
	return 0;
}

