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
/*
         0 1                 x2
        -----------------  
  y=11 / 1 2 3 4 5 6 7 8     x1
         0
 -----------------
         1 2
		 1 1
------------------
           1 3		  		 	
*/   
int Div(BigInt &x1,int y, BigInt &x2) 
{
	int r=0;
	for(int i=x1.n-1; i>=0; i--) 
	{
		r = r*10+x1.num[i];  // 落一位 
		x2.num[i] = r / y;
		r         = r % y;
	}
	x2.n=x1.n;
	return r;
}
int main()
{
	string s1="12345678"; 
	BigInt x1; Init(s1, x1);  //初始化x1
	Output(x1);	
	BigInt x2;
	int r=Div(x1,1111, x2);
	Output(x2);	
	cout<<r<<endl;
	return 0;
}





