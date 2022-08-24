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
// 返回n阶赦免矩阵中的(i,j)的数值 
int GetElem(int n, int i,int j)
{
	if(n==2) 
	{
		if(i==0 && j==0)  return 0;
		return 1;
	}
	if(i< n/2 && j< n/2)   return 0;  // 左上角 
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
