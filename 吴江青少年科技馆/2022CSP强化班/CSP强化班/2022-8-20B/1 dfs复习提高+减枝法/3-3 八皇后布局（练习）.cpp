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
	int n=V.size();
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			if(  )
				cout<<" + ";
			else
				cout<<" Q ";
		cout<<endl;		
	}
}

// Layout�д洢�������еĲ��֣��ж�col�Ƿ��ͻ 
bool isSafe(vector<int> &Layout, int col)
{
	int n=Layout.size();
	for(int i=0; i<n; i++) 
		if(Layout[i]==col)
			return false;   // �г�ͻ 
	for(int i=0; i<n; i++) 
		if(   )
			return false;   // ���Խ��߳�ͻ 
	for(int i=0; i<n; i++) 
		if(   )
			return false;   // �ζԽ��߳�ͻ 
	return true;
}

void Solve(int n, int ith, vector<int> &Layout)
{
	if(ith==n)
	{
		Output(Layout);
	}
	else
	{
		// ѡ���ith�лʺ�����±� 
		for(int col=0; col<n; col++)
		{


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


