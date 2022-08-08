#include<bits/stdc++.h>

using namespace std;
// 0.235 =>  235    3->1000 
// x=235  y=1000

// 0.(235) =>  235   3->999
// x=235  y=999

// 0.134(235) => 
// 120.134(235) => 

int Gcd(int n,int m)
{
	if(n%m==0) return m;
	return Gcd(m,n%m);
}
long long Pw(int b)
{
	int t=1;
	while(b!=0){
		t*=10;b/=10;
	}
	return t;
}
int main()
{
	string s;
	cin>>s;
	int i=0,n=s.size();
	long long a=0,b=0,c=0;
	while(s[i]!='.'&&i<n) a=a*10+(s[i++]-'0');
	i++;
	while(s[i]!='('&&i<n) b=b*10+(s[i++]-'0');
	i++;
	while(s[i]!=')'&&i<n) c=c*10+(s[i++]-'0');
	int fz=0,fm=0;
	//cout<<a<<' '<<b<<' '<<c<<endl;
	if(c!=0){
		int p=c;
		while(p!=0){
			fm=fm*10+9;p/=10;
		}
		fz+=c;
	}
	//getchar();getchar();
	if(b!=0){
		if(fm==0) fm=1;
		fm*=Pw(b);
		fz+=b;
		//cout<<fm<<' '<<fz<<endl;
	}
	if(a!=0)
		fz+=a*fm;
	getchar();
	//cout<<fz<<' '<<fm;
	int t=Gcd(fz,fm);
	fz/=t;fm/=t;
	cout<<fz<<' '<<fm;
	return 0;
}

