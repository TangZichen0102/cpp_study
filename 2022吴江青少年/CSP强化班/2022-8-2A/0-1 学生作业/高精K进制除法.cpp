#include<bits/stdc++.h>

using namespace std;

const int S=1e5+5;
struct Int{
	int a[S];
	int n;
};
void Output(Int &c);
int cf(int K,Int &a,int k,Int &c)//K进制大整数除以k 
{
	int ys=0;
	for(int i=a.n-1;i>=0;i--){
		ys=ys*K+a.a[i];
		c.a[i]=ys/k;
		//cout<<c.a[i]<<endl;
		ys%=k;
		//cout<<ys<<endl;
	}
	c.n=a.n;
	while(c.a[c.n-1]==0) c.n--;
	//Output(c);
	//cout<<ys<<endl;
	return ys;
} 
void StoI(string &s,Int &a)
{
	int t=s.size(); 
	for(int i=t-1;i>=0;i--)
		a.a[t-i-1]=s[i]-'0';
	a.n=t;
	Output(a);
}

void Output(Int &c)
{
	for(int i=c.n-1;i>=0;i--)
		cout<<c.a[i];
	cout<<endl;
}

int main()
{
	Int a,c;
	string s;
	int K,k;
	cin>>K;
	cin>>s;
	cin>>k;
	StoI(s,a);
	int ys=cf(K,a,k,c);
	Output(c);
	cout<<ys;
	return 0;
 } 
