#include <bits/stdc++.h>

using namespace std;

int Toint(string s);
int Gcd(int a,int b);
void HuaJian(int &fz,int &fm); 

int main()
{
	string s;	cin>>s;
	int k=s.find('.'); 
	string z=s.substr(0,k);  // 整数部分 
	string x=s.substr(k+1);  // 小数部分 
	int fm=0,fz=0, fz2=Toint(z);
	
	if(x.find('(')<0 || x.find('(')>x.length()-1)
	{
		fm=pow(10,x.length());  // 有限小数 
		fz=Toint(x);
	}
	else
	{
			int n;
			for(int i=0; i<x.find('('); i++)
				fz=fz*10+int(x[i]-'0');      // 不循环的小数部分 
			n=fz;
			for(int i=x.find('(')+1; i<x.length()-1; i++)
			{
				fm=fm*10+9;
				fz=fz*10+int(x[i]-'0');   // 循环的小数部分 
			}
			for(int i=0;i<x.find('(');i++)
				fm=fm*10;
			fz-=n;
	}
	
	fz+=fz2*fm;
	HuaJian(fz,fm);
	cout<<fz<<"/"<<fm;
	
	return 0;
}


int Toint(string s)
{
	int sum=0;
	for(int i=0;i<s.length();i++)
		sum=sum*10+int(s[i]-'0');
	return sum;
}

int Gcd(int a,int b)
{
	int r=a%b;
	while(r!=0)
	{
		a=b;b=r;
		r=a%b;
	}
	return b;
}

void HuaJian(int &fz,int &fm)
{
	int gcd=Gcd(fz,fm);
	fz/=gcd;	fm/=gcd;
}
