#include <iostream> 
#include <vector> 
using namespace std;

bool isPrime(int x) 
{
	if(x==1) return false;
	int m=sqrt(x);
	for(int i=2; i<=m; i++)
		if(x%i==0)
			return false;
	return true;
}

void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
} 
//  10000以内的所有素数 
/*
  0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
  T T T T F T F T F F F  T  F  T  F  F  F  T  F  T  F  F  F  T  F  F 
  
*/ 
int main()
{
	int n=10000;
	vector<bool> f(n+1, true);  // 初始化
	// 去掉2的倍数 
	for(int k=2; 2*k<=n; k++)
		f[2*k]=false;
	// 去掉3的倍数 
	for(int k=2; 3*k<=n; k++)
		f[3*k]=false;
	.。。。。
	for(int i=2; i<=n; i++)		
		if(f[i]==true)
			cout<<i<<"  ";
		
	Output(v);
	Output(v);
	return 0;
}
