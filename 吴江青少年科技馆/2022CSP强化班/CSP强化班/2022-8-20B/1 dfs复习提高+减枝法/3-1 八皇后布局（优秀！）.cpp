#include <bits/stdc++.h>
#include <vector>

using namespace std;

int cnt=0;
void Output(vector< vector<char> > &M);
void EightQueen(vector< vector<char> > &Chess, int row);
bool IsSafe(vector< vector<char> > &Chess, int x, int y);

int main()
{
	int m=8,n=8;
	vector< vector<char> > Chess(m,vector<char>(n,'+'));
	
	EightQueen(Chess,0);
	
	cout<<"һ���� "<<cnt<<" �ְڷ���";
	
	return 0;
}


void Output(vector< vector<char> > &M)
{
	for(int i=0;i<M.size();i++)
	{
		for(int j=0;j<M[i].size();j++)
			cout<<M[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<endl;
}

void EightQueen(vector< vector<char> > &Chess, int row)
{
	int m=Chess.size(), n=Chess[0].size();
	if(row == m)
	{
		cnt++;	cout<<"�� "<<cnt<<" ��:"<<endl;
		Output(Chess); 
	}
	else
	{
		for(int j=0;j<n;j++)
		{
			if(IsSafe(Chess,row,j) == true)
			{
				Chess[row][j]='Q';
				EightQueen(Chess,row+1);  // !!!! 
				Chess[row][j]='+';
			}
		}
	}
}

bool IsSafe(vector< vector<char> > &Chess, int x, int y)
{
	int m=Chess.size(),n=Chess[0].size();
	//����
	for(int j=0;j<n;j++)
		if(j!=y && Chess[x][j] == 'Q')
			return false;
	
	//����
	for(int i=0;i<m;i++)
		if(i!=x && Chess[i][y] == 'Q')
			return false;
	
	//����
	for(int i=x-1,j=y-1; i>=0&&j>=0; i--,j--)
		if(Chess[i][j] == 'Q')
			return false;
	
	//����
	for(int i=x+1,j=y+1; i<m&&j<n; i++,j++)
		if(Chess[i][j] == 'Q')
			return false;
	
	//����
	for(int i=x+1,j=y-1; i<m&&j>=0; i++,j--)
		if(Chess[i][j] == 'Q')
			return false;
	
	//����
	for(int i=x-1,j=y+1; i>=0&&j<n; i--,j++)
		if(Chess[i][j] == 'Q')
			return false;
	
	
	return true;		 
}
