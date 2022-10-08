#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n;
int a[N],f[N][2];
int main(){
	freopen("sequence.in","r",stdin);
	freopen("sequence.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	f[1][0]=f[1][1]=1;
	for(int i=2;i<=n;i++){
		f[i][0]=f[i-1][0]; //ÉÏÉý 
		f[i][1]=f[i-1][1]; //ÏÂ½µ 
		if(a[i]>a[i-1]) f[i][0]=max(f[i][0],f[i-1][1]+1);
		else if(a[i]<a[i-1]) f[i][1]=max(f[i][1],f[i-1][0]+1);
	}
	int ans=max(f[n][0],f[n][1]);
	cout<<ans<<endl;
	return 0;
}
