#include  <iostream>
#include  <iomanip>
using namespace std;
#define N 10

void Output(int a[][N], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<setw(2)<<a[i][j]<<" ";
		cout<<endl;	
	}
}

void HX(int a[][N], int n)
{
	int x=1, m=n-1;
	for(int k=0; k<n/2; k++)  // n/2Ȧ 
	{
		int i=k,j=k;   // ��� 
		for(int k1=1; k1<=m; k1++) a[i][j]=x++, j++;  //�� 
		for(int k1=1; k1<=m; k1++) a[i][j]=x++, i++;  //���� 
		for(int k1=1; k1<=m; k1++) a[i][j]=x++, j--;  //���� 
		for(int k1=1; k1<=m; k1++) a[i][j]=x++, i--;  //�� 
		m -= 2;
	}
	if(n%2==1)
		a[n/2][n/2]=x;
}

int main()
{
	int n=10;
	int a[N][N]={0};
	HX(a,n);
	Output(a,n);
	return 0;
}





