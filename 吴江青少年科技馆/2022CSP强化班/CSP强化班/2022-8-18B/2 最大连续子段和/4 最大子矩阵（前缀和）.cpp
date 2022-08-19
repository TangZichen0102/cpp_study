#include <iostream>
using namespace std;
#define N 4

// ÿ���������Ӿ��󣬶�Ӧ��һ������Ԫ�صĺ͡���͵����ֵ�������ֵ��Ӧ���Ӿ���
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
			sum += a[i]; // �����ۼ� 
		else
			sum  = a[i], si=i; // ��ͷ��ʼ 
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
		// ��a[si][]...a[ei][]��ͣ�����b[0]...b[N-1]
		// b[j] = a[si][j] + a[si+1][j] +...a[ei][j]
		int b[N]={0};
		for(int ei=si; ei<N; ei++)
		{
			for(int j=0; j<N; j++) 
				b[j] += a[ei][j];
			int sj,ej; 
			int sum = GetMax(b,N, sj,ej);
			//cout<<si<<"  "<<ei<<endl;   // �Ӿ�����к� 
			//cout<<sj<<"  "<<ej<<endl;   // �Ӿ�����к�
			//Output(b,N);
			//cout<<sum<<endl;   // �Ӿ���ĺ� 
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
	cout<<si<<"  "<<ei<<endl;   // ����Ӿ�����к� 
	cout<<sj<<"  "<<ej<<endl;   // ����Ӿ�����к�
	cout<<max<<endl;
}


