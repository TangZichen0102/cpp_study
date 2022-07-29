#include  <iostream>
using namespace std;

void Output(int a[], int n)
{
	cout<<a[0]; 
	for(int i=1; i<n; i++)
	{
		if(a[i-1]<a[i])
			cout<<" ";
		else
			cout<<endl;
		cout<<a[i]; 	
	}
	cout<<endl; 
} 
int FindSE(int a[],int n, int si[],int ei[])
{
	int k=0;
	si[k]=0;   // ��һ�ε���ʼλ�� 
	for(int i=1; i<n; i++)
	{
		if(a[i-1]>=a[i])
		{
			ei[k]=i-1; k++;  // ��ǰ�ε���ֹλ�� 
			si[k]=i;         // ��һ�εĿ�ʼλ�� 
		}
	}
	ei[k]=n-1;  k++;   // ���ε���ֹλ�� 
	return k;  //����k������������ 
}
 
int main()
{
	int a[20]={5,6,1,2,9,10,3,4,14,7,16,8,12}, n=13;
	int si[10],ei[10];  // si[i],ei[i]�ֱ��ǵ�i�������еĿ�ʼ����ֹλ�� 
	int k=FindSE(a,n, si,ei); //����k������������ 
	// si={0, 2, 6, 9,11}
	// ei={1, 5, 8,10,12}
	for(int i=0; i<k; i++)
	{
		for(int j=si[i]; j<=ei[i]; j++)
			cout<<a[j]<<" ";
		cout<<endl;	
	}
	return 0;
}

/*
5,6,
1,2,9,10,
3,4,14,
7,16,
8,12
*/




