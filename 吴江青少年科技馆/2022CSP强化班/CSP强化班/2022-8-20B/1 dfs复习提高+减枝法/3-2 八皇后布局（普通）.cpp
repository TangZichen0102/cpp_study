#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;	
}
void OutputMatrix(vector<int> &v)
{
	int n=v.size();
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			if( j==v[i] )
				cout<<" Q ";
			else
				cout<<" + ";
		cout<<endl;		
	}
}

// Layout中存储了若干行的布局，判断col是否冲突 
bool isSafe(vector<int> &Layout, int col)
{
	int n=Layout.size();  // 预备在第n行第col列上放置皇后 
	for(int i=0; i<n; i++) 
		if(Layout[i]==col)
			return false;   // 列冲突 
	for(int i=0; i<n; i++) 
		if( n-col == i-Layout[i] )
			return false;   // 主对角线冲突 
	for(int i=0; i<n; i++) 
		if( n+col == i+Layout[i] )
			return false;   // 次对角线冲突 
	return true;
}

int nn=0;
void Solve(int n, int ith, vector<int> &Layout)
{
	if(ith==n)
	{
		nn++; cout<<nn<<": ";
		Output(Layout);
		OutputMatrix(Layout);
	}
	else
	{
		// 选择第ith行皇后的列下标 
		for(int col=0; col<n; col++)
		{
			if( isSafe(Layout, col)==false)	
				continue;  // 剪枝法 
			Layout.push_back(col);
			Solve(n,ith+1, Layout);
			Layout.pop_back();
		}
	}
}

int main()
{
	int n=8;
	// 解的形式 
	// Layout[i]:第i行皇后的列下标 : 7 3 0 2 5 1 6 4
	vector<int> Layout;   // 栈 
	Solve(n, 0, Layout);
	return 0;
}


