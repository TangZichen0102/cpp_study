#include  <iostream>
using namespace std;

void Output(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" "; 
	cout<<endl; 
} 

int Search(int a[],int n, int x)
{
	for(int i=0; i<n; i++)
		if(a[i]==x)
			return i;
	return -1;
}
// a[]: 11,22,33,44,55,66     x:50
// a[]: 11,22,33,44,50,55,66    
// a[]: 11,22,33,44,55,66     x:5
// a[]:  5,11,22,33,44,55,66
int Insert(int a[],int n, int x)
{
	int i;
	for(i=n-1; i>=0 && a[i]>x; i--)  // 大数 
		a[i+1]=a[i];   // 数据后移 
    a[i+1] = x;
	return n+1;
}
void InsertSort(int a[], int n)
{
	for(int i=1; i<n; i++) 
	{
		// 比它小的插到前面去 ？？
		// 在有序序列a[0]..a[i-1]中，插入a[i] 
		int x=a[i]; // 让位		 
		int j;
		for(j=i-1; j>=0 && a[j]>x; j--)  // 大数 
			a[j+1]=a[j];                 // 大数移位		 
		a[j+1]=x; // 到位		 
	}
}

int main()
{
	int a[10]={4,2,1,6,3,9,5,7,8}, n=9;
	Output(a, n);   
	InsertSort(a, n);   
	Output(a, n);   
	return 0;
}






