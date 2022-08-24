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
// 在a中，对以(si,sj)为左上角的n阶的子矩阵，进行赦免 
void Solve(vector<vector<int> > &a,int si,int sj, int n)
{
	if(n==2)
	{
		a[si  ][sj]=0; a[si]  [sj+1]=1;
		a[si+1][sj]=1; a[si+1][sj+1]=1;
	}
	else
	{
		// 分解问题 
	}	
}

int main()
{
	int n=3; // cin>>n;
	int p=1;
	for(int i=0; i<n; i++)  p=p*2;
	vector<vector<int> > a(p, vector<int>(p,0));
	Solve(a,0,0, p);
	Output(a);
    return 0;
}
