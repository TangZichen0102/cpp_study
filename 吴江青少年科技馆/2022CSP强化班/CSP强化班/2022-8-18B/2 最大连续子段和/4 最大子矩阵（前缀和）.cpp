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

int GetMax(int a[N][N], int &maxsi,int &maxsj, int &maxei,int &maxej)
{
	int maxsum=0;
	for(int si=0; si<N; si++)
	{
		// 将a[si][]...a[ei][]求和，存入b[0]...b[N-1]
		// b[j] = a[si][j] + a[si+1][j] +...a[ei][j]
		int b[N]={0};
		for(int ei=si; ei<N; ei++)
		{
			for(int j=0; j<N; j++) 
				b[j] += a[ei][j];
			int sj,ej; 
			int sum = GetMax(b,N, sj,ej);
			//cout<<si<<"  "<<ei<<endl;   // 子矩阵的行号 
			//cout<<sj<<"  "<<ej<<endl;   // 子矩阵的列号
			//Output(b,N);
			//cout<<sum<<endl;   // 子矩阵的和 
			if(sum>maxsum) 
				maxsum=sum, maxsi=si, maxsj=sj, maxei=ei, maxej=ej;
		}
	}
	return maxsum;
}

int main()
{
	int a[N][N]={
		{ 0, -2, -7,  0},
		{ 9,  2,  6, -2},
		{-4,  1, -4,  1},
		{-1, 18,  0, -2}
	};
	int si,sj; 
	int ei,ej; 
	int max=GetMax(a, si,sj, ei,ej);
	cout<<si<<"  "<<ei<<endl;   // 最大子矩阵的行号 
	cout<<sj<<"  "<<ej<<endl;   // 最大子矩阵的列号
	cout<<max<<endl;
}


