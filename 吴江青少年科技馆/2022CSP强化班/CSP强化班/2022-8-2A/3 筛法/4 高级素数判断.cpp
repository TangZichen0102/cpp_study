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

bool isPrime(int x,vector<int> &Primes) 
{
	if(x==1) return false;
	for(int i=0; i<Primes.size(); i++)
		if(x%Primes[i]==0)
			return false;
	return true;
}

void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
} 
//  10000���ڵ��������� 
/*
  0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
  T T T T F T F T F F F  T  F  T  F  F  F  T  F  T  F  F  F  T  F  F 
*/ 
void GetPrimes(int n, vector<int> &Primes) 
{
	vector<bool> f(n+1, true);  // ��ʼ��
	for(int x=2; x*x<=n; x++) 
	{
		if(f[x]==false)  continue;  // ���Է�����
		// ȥ��x�ı��� 
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
	int cnt=0; 
	for(int x=10001; x<100000000; x+=2)
		if(isPrime(x,Primes)) // 23�� 
		//if(isPrime(x))      // 67��  
			cnt++; //cout<<x<<" "; 
	cout<<cnt<<endl;  //5760226   
	return 0;
}


