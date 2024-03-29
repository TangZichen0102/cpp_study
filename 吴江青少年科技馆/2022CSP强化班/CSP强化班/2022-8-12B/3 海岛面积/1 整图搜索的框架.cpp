#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <stack> 
using namespace std;

struct Loc
{
	int i,j;
};

void Output(vector<vector<int> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<setw(2)<<m[i][j]<<"  ";
		cout<<endl;	
	}
	cout<<endl;	
} 
int di[] ={ 0, 0, 1, -1};
int dj[] ={ 1,-1, 0,  0};


void Bfs(vector<vector<int>  > &M,    // 搜索的空间 
	     vector<vector<bool> > &visited,    // 搜索构成中的痕迹
		 int i, int j)
{
}

int Bfs(vector<vector<int> > &M)
{
	int cnt=0; 
	int m=M.size(), n=M[0].size();
	vector<vector<bool> > visited(m, vector<bool>(n, false));  // 标记数组 !!
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(M[i][j]==0) continue;   // 不能掉道海里去 
			if(visited[i][j]==true) continue;   // 不能重复路
			// 搜索一个岛上所有的区域，在visited中标记 
			Bfs(M,visited, i,j);
			cnt++;
		}	
	return cnt;
}

int main()
{
	freopen("data.txt", "r", stdin);
	int m,n;  cin>>m>>n;
	vector<vector<int> > M(m, vector<int>(n,0));
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>M[i][j];
	Output(M);
	int cnt=Bfs(M);
	cout<<cnt<<endl; 
	return 0;
}
