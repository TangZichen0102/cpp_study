#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N=5e5+10;
LL n,a[N],i=1,ans=0,last=0;
bool sheng(LL c,LL d){return c<=d;}
bool jiang(LL c,LL d){return c>=d;}
bool zheng(LL c,LL d){return c>0&&d>0;}
bool fu(LL c,LL d){return c<0&&d<0;}
int main(){
	scanf("%lld",&n);
	for(LL j=1;j<=n;j++) scanf("%lld",&a[j]);
	while(1){
		while(i<=n&&a[i]==0) i++;
		if(i>n){
			printf("%lld",ans);
			return 0;
		}
		if(a[i]>0){
			while(i<=n&&zheng(a[i],a[i+1])&&sheng(a[i],a[i+1])) i++;
			ans+=min(a[i],abs(a[i]-last));
			while(i<=n&&zheng(a[i],a[i+1])&&jiang(a[i],a[i+1])) i++;
		}
		if(a[i]<0){
			while(i<=n&&fu(a[i],a[i+1])&&jiang(a[i],a[i+1])) i++;
			ans+=min(abs(a[i]),abs(a[i]-last));
			while(i<=n&&fu(a[i],a[i+1])&&sheng(a[i],a[i+1])) i++;
		}
		last=a[i++];
	}
	return 0;
}