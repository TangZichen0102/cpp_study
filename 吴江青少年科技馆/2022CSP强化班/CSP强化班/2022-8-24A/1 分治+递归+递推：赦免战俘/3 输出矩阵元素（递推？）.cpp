#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void Output(vector<vector<int> > &a)
{
	for(int i=0; i<a.size(); i++)
	{
		for(int j=0; j<a[i].size(); j++)
			cout<<a[i][j]<<" ";
		cout<<endl; 		
	}
}
// ��a�У�����(si,sj)Ϊ���Ͻǵ�n�׵��Ӿ��󣬽������� 
void Solve(vector<vector<int> > &a,int si,int sj, int n)
{
	if(n==2)
	{
		a[si  ][sj]=0; a[si]  [sj+1]=1;
		a[si+1][sj]=1; a[si+1][sj+1]=1;
	}
	else
	{
		// �ֽ����� 
		Solve(a,     si, sj+n/2, n/2);  // ���Ͻ� 
		Solve(a, si+n/2,     sj, n/2);  // ���½� 
		Solve(a, si+n/2, sj+n/2, n/2);  // ���½� 
	}	
}
// ����n����������е�(i,j)����ֵ 
int GetElem(int n, int i,int j)
{
	if(n==2) 
	{
		if(i==0 && j==0)  return 0;
		return 1;
	}
	if(i< n/2 && j< n/2)   return 0;  // ���Ͻ� 
	if(i>=n/2 && j< n/2)   return GetElem(n/2, i-n/2, j    );  // ���½�
	if(i< n/2 && j>=n/2)   return GetElem(n/2, i    , j-n/2);  // ���Ͻ�
	if(i>=n/2 && j>=n/2)   return GetElem(n/2, i-n/2, j-n/2);  // ���½�
}

int main()
{
	int n=3; // cin>>n;
	int p=1;
	for(int i=0; i<n; i++)  p=p*2;
	for(int i=0; i<p; i++)
	{
		for(int j=0; j<p; j++)
			cout<<GetElem(p, i,j)<<" ";
		cout<<endl;	
	}
    return 0;
}
