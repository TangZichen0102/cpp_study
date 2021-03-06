#include  <iostream>
using namespace std;

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
		cout<<x.num[i]<<" "; 	
	cout<<endl; 
} 

void Mul(BigInt &x, int y)
{
	int i, jw=0;
	for(i=0; i<x.n; i++)
	{
		x.num[i] = x.num[i]*y+jw;
		jw       = x.num[i]/10;
		x.num[i] = x.num[i]%10;
	}
	while(jw>0)
	{
		x.num[i]=jw%10; i++;
		jw=jw/10;
	}
	x.n=i;
}
 
int main()
{
	BigInt x;	x.n=1;  x.num[0]=1;  //初始化1
	for(int i=1; i<=100; i++) 
	{
		Mul(x, i);
		Output(x);   
	}
	return 0;
}





