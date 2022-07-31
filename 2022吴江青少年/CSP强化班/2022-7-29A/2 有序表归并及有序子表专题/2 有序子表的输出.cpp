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
 
int main()
{
	int a[20]={5,6,1,2,9,10,3,4,14,7,16,8,12}, n=13;
	Output(a, n);   
	return 0;
}

/*
5,6,
1,2,9,10,
3,4,14,
7,16,
8,12
*/




