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

// Layout�д洢�������еĲ��֣��ж�col�Ƿ��ͻ 
bool isSafe(vector<int> &Layout, int col)
{
	int n=Layout.size();  // Ԥ���ڵ�n�е�col���Ϸ��ûʺ� 
	for(int i=0; i<n; i++) 
		if(Layout[i]==col)
			return false;   // �г�ͻ 
	for(int i=0; i<n; i++) 
		if( n-col == i-Layout[i] )
			return false;   // ���Խ��߳�ͻ 
	for(int i=0; i<n; i++) 
		if( n+col == i+Layout[i] )
			return false;   // �ζԽ��߳�ͻ 
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
		// ѡ���ith�лʺ�����±� 
		for(int col=0; col<n; col++)
		{
			if( isSafe(Layout, col)==false)	
				continue;  // ��֦�� 
			Layout.push_back(col);
			Solve(n,ith+1, Layout);
			Layout.pop_back();
		}
	}
}

int main()
{
	int n=8;
	// �����ʽ 
	// Layout[i]:��i�лʺ�����±� : 7 3 0 2 5 1 6 4
	vector<int> Layout;   // ջ 
	Solve(n, 0, Layout);
	return 0;
}


