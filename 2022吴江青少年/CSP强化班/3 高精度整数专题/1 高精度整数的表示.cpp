#include  <iostream>
using namespace std;

struct BigInt
{
	// num[0]�Ǹ�λ  num[n-1]�����λ 
	int num[10000], n;
};

// ֵ���� : �����ڴ浥Ԫ��Ч�ʿ��ǣ� 
// ���ô��� : �����ڴ浥Ԫ 
void Output(BigInt x)   // һ��Ҫ�á����ô��� �� 
{
	for(int i=x.n-1; i>=0; i--)
		cout<<x.num[i]<<" "; 	
	cout<<endl; 
} 
 
int main()
{
	BigInt x;
	x.n=1;  x.num[0]=1;
	Output(x);   
	return 0;
}


