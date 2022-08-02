#include <iostream> 
#include <vector> 
#include <cmath> 
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
void GetPrimes(int n, vector<int> &Primes) 
{
	vector<bool> f(n+1, true);  // 初始化
	for(int x=2; x*x<=n; x++) 
	{
		if(f[x]==false)  continue;  // 忽略非素数
		// 去掉x的倍数 
		for(int k=x; x*k<=n; k++)
			f[x*k]=false;
	}
	for(int i=2; i<=n; i++)		
		if(f[i]==true)
			Primes.push_back(i);
}

int main()
{
	int n=10000;
	vector<int> Primes;
	GetPrimes(n, Primes);
	Output(Primes);
	cout<<Primes.size()<<endl;
	return 0;
}
