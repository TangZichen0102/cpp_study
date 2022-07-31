#include  <iostream>
#include  <iomanip>
using namespace std;

// 问题分解的策略 
int GetElem(int n,int i,int j) 
{
	int ans=1;
	// (i,j)在内部 
	while( !(i==0 || i==n-1 || j==0 ||  j==n-1) )
	{
		ans += 4*(n-1);
		n-=2, i--,j--;
	} 
	// (i,j)在边框
	if(i==0  )  return ans              +j;     // 上边框 
	if(j==n-1)  return ans+n-1          +i;     // 右边框 
	if(i==n-1)  return ans+n-1+n-1+     n-j-1 ; // 下边框 
	if(j==0  )  return ans+n-1+n-1+n-1+ n-i-1;  // 左边框 
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





