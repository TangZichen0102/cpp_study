#include <iostream>
using namespace std;
#define K 10
struct BigInt
{
	int num[10000]; 
	int n;
};
void  Mul(BigInt &x, int y)
{
	int i, jw=0;
	for(i=0; i<x.n; i++)
	{
		x.num[i] = x.num[i]*y + jw;
		jw = x.num[i]/K;	x.num[i]= x.num[i] %K;
	}
	while(jw>0)
	{
		x.num[i] = jw%K;  i++; 
		jw=jw/K;
	}
	x.n = i;
} 
void Output(BigInt &x) 
{
	for(int i=x.n-1; i>=0; i--)
		cout<<x.num[i]; 	
	cout<<endl; 
} 
void Add(BigInt &x1,BigInt &x2, BigInt &x3)
{
	int i, jw=0;
	for(i=0; i<x1.n && i<x2.n; i++)
	{
		x3.num[i] = x1.num[i] + x2.num[i] + jw;
		jw       =x3.num[i]/K;	x3.num[i]=x3.num[i]%K;
	}
	for(; i<x1.n; i++)
	{
		x3.num[i] = x1.num[i]+ jw;
		jw       =x3.num[i]/K;	x3.num[i]=x3.num[i]%K;
	}
	for(; i<x2.n; i++)
	{
		x3.num[i] = x2.num[i]+ jw;
		jw       =x3.num[i]/K;	x3.num[i]=x3.num[i]%K;
	}
	if(jw>0)
	{
		x3.num[i] = jw;  i++;
	}
	x3.n = i;
}
int main()
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	BigInt x1; x1.num[0]=1, x1.n=1; 
	for(int i=1; i<=b; i++) 
		Mul(x1, a);  
	BigInt x2; x2.num[0]=1, x2.n=1; 
	for(int i=1; i<=y; i++) 
		Mul(x2, x);  
	BigInt x3;
	Add(x1,x2, x3);
	Output(x3);
	return 0;
}
