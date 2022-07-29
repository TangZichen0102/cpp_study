#include  <iostream>
using namespace std;
#define K 1000

struct BigInt
{
	// num[0]是个位  num[n-1]是最高位 
	int num[10000], n;
};

// 值传递 : 复制内存单元，效率堪忧！ 
// 引用传递 : 共享内存单元 
void Output(BigInt &x)   // 一定要用“引用传递 ” 
{
	for(int i=x.n-1; i>=0; i--)
	{
		if(x.num[i]<10) 
			cout<<"00"<<x.num[i]<<" ";
		else
			if(x.num[i]<100) 
				cout<<"0"<<x.num[i]<<" ";
			else 
				cout<<x.num[i]<<" ";
	}
	cout<<endl; 
} 

void Mul(BigInt &x, int y)
{
	int i, jw=0;
	for(i=0; i<x.n; i++)
	{
		x.num[i] = x.num[i]*y+jw;
		jw       = x.num[i]/K;
		x.num[i] = x.num[i]%K;
	}
	while(jw>0)
	{
		x.num[i]=jw%K; i++;
		jw=jw/K;
	}
	x.n=i;
}
 
void Add(BigInt &x1, BigInt &x2, BigInt &x3)
{
	int i, jw=0;
	for(i=0; i<x1.n && i<x2.n; i++)
	{
		x3.num[i] = x1.num[i] + x2.num[i] + jw;
		jw        = x3.num[i] / K;	x3.num[i] = x3.num[i] % K;
	}
	for(; i<x1.n; i++)
	{
		x3.num[i] = x1.num[i] + jw;
		jw        = x3.num[i] / K;	x3.num[i] = x3.num[i] % K;
	}
	for(; i<x2.n; i++)
	{
		x3.num[i] = x2.num[i] + jw;
		jw        = x3.num[i] / K;	x3.num[i] = x3.num[i] % K;
	}
	if(jw>0)
	{
		x3.num[i]=jw;  i++; 
	}
	x3.n=i;
}
 
int main()
{
	BigInt x1;	x1.n=1;  x1.num[0]=1;  //初始化1
	for(int i=1; i<=100; i++) 
		Mul(x1, i);

	BigInt x2;	x2.n=1;  x2.num[0]=1;  //初始化1
	for(int i=1; i<=100; i++) 
		Mul(x2, 2);
	
	BigInt x3;   // =100! + 2^100
	Add(x1,x2,  x3);
	
	Output(x1);	Output(x2);	Output(x3);
	return 0;
}





