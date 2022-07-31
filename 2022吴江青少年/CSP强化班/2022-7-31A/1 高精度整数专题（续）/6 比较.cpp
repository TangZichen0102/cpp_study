#include  <iostream>
using namespace std;
#define K 10

struct BigInt
{
	// num[0]是个位  num[n-1]是最高位 
	int num[10000], n;
};

void Output(BigInt &x)   // 一定要用“引用传递 ” 
{
	for(int i=x.n-1; i>=0; i--)
		cout<<x.num[i]<<" ";
	cout<<endl; 
} 
void Init(string &s, BigInt &x)
{
	x.n=s.length();
	for(int i=0; i<x.n; i++) 
		x.num[i] = s[x.n-i-1] - '0';
}
int Cmp(BigInt &x1,BigInt &x2)
{
	if(x1.n>x2.n)  return 1;
	if(x1.n<x2.n)  return -1;
	for(int i=x1.n-1; i>=0; i--) 
		if(x1.num[i]!=x2.num[i]) 
			return x1.num[i]-x2.num[i];
	return 0;
}

int main()
{
	string s1="112345678"; 
	string s2="12346678"; 
	BigInt x1; Init(s1, x1);  //初始化x1
	BigInt x2; Init(s2, x2);  //初始化x2
	Output(x1);	
	int k=Cmp(x1,x2);
	if(k==0)
		 cout<<"==";
	else
		if(k<0)
		 	cout<<"<";
		else
		 	cout<<">";
	Output(x2);	
	return 0;
}





