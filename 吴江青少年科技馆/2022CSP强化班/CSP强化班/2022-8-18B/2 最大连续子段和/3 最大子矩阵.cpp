#include <iostream>
using namespace std;
#define N 4

// 每个连续的子矩阵，对应着一个所有元素的和。求和的最大值，求最大值对应的子矩阵
void Output(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;	
}

int GetMax(int a[],int n, int &maxsi,int &maxei)
{
	int sum=0, maxsum=0;
	int si=0;  maxei=0;
	for(int i=0; i<n; i++) 
	{
		if(sum>=0)
			sum += a[i]; // 继续累加 
		else
			sum  = a[i], si=i; // 从头开始 
		//cout<<sum<<" " ;
		if(sum>maxsum)
			maxsum = sum, maxsi=si, maxei=i;
	}
	return maxsum;
}

int GetMax(int a[N][N])
{
	for(int si=0; si<N; si++)
		for(int ei=si; ei<N; ei++)
		{
			// 将a[si][]...a[ei][]求和，存入b[0]...b[N-1]
			// b[j] = a[si][j] + a[si+1][j] +...a[ei][j]
			int b[N]={0};
			for(int j=0; j<N; j++) 
				for(int i=si; i<=ei; i++)
					b[j] += a[i][j];
			int sj,ej; 
			int sum = GetMax(b,N, sj,ej);
			cout<<si<<"  "<<ei<<endl;   // 子矩阵的行号 
			cout<<sj<<"  "<<ej<<endl;   // 子矩阵的列号
			Output(b,N);
			cout<<sum<<endl;   // 子矩阵的和 
		}
}

int main()
{
	int a[N][N]={
		{ 0, -2, -7,  0},
		{ 9,  2,  6,  2},
		{-4,  1, -4,  1},
		{-1, 18,  0, -2}
	};
	int max=GetMax(a);
	cout<<max<<endl;
}


