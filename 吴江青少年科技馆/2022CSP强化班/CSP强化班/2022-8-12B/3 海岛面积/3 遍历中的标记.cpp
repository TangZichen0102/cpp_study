#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <queue> 
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
	int m=M.size(), n=M[0].size();
	queue<Loc> Q;
	Loc loc={i,j};
	Q.push(loc);  visited[loc.i][loc.j]=true;  // 原始问题进队列，做标记（避免重复） 
	while( !Q.empty() )
	{
		// cout<<Q.size()<<endl;  !!!
		// 出队列
		loc=Q.front(); Q.pop(); 
		// 分解出来的小问题，进队列 
		for(int k=0; k<4; k++) 
		{
			Loc next={loc.i+di[k], loc.j+dj[k] };
			if(next.i<0 || next.i>=m)  continue;  // 越界 
			if(next.j<0 || next.j>=n)  continue;
			if(M[next.i][next.j]==0 )  continue;  // 不能掉道海里去 
			if(visited[next.i][next.j]==true)  continue;  // 不能走重复路（用标记） 
			Q.push(next);   visited[next.i][next.j]=true;   // 可行的邻居进队列，做标记（避免重复） 
		}
	}
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
