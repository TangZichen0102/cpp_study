#include  <iostream>
#include  <iomanip>
using namespace std;

// ����ֽ�Ĳ��� 
int GetElem(int n,int i,int j) 
{
	int ans=1;
	// (i,j)���ڲ� 
	while( !(i==0 || i==n-1 || j==0 ||  j==n-1) )
	{
		ans += 4*(n-1);
		n-=2, i--,j--;
	} 
	// (i,j)�ڱ߿�
	if(i==0  )  return ans              +j;     // �ϱ߿� 
	if(j==n-1)  return ans+n-1          +i;     // �ұ߿� 
	if(i==n-1)  return ans+n-1+n-1+     n-j-1 ; // �±߿� 
	if(j==0  )  return ans+n-1+n-1+n-1+ n-i-1;  // ��߿� 
}

int main()
{
	int n=10;
	int i=20,j=50;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<setw(2)<<GetElem(n,i,j) <<" ";
		cout<<endl;	
	}
	return 0;
}





