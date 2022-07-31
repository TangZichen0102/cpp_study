#include  <iostream>
using namespace std;
#define K 1000

struct BigInt
{
	// num[0]�Ǹ�λ  num[n-1]�����λ 
	int num[10000], n;
};

// ֵ���� : �����ڴ浥Ԫ��Ч�ʿ��ǣ� 
// ���ô��� : �����ڴ浥Ԫ 
void Output(BigInt &x)   // һ��Ҫ�á����ô��� �� 
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
 
int main()
{
	BigInt x;	x.n=1;  x.num[0]=1;  //��ʼ��1
	for(int i=1; i<=100; i++) 
	{
		Mul(x, i);
		Output(x);   
	}
	return 0;
}





