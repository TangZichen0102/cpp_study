#include <iostream> 
#include <vector> 
#include <queue> 
using namespace std;

struct Loc
{
	int i,j;  // 位置 
};
void Output(vector<vector<int> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<m[i][j]<<"  ";
		cout<<endl;	
	}
} 
int di[] ={ 0, 0, 1, -1};
int dj[] ={ 1,-1, 0,  0};

int Bfs(vector<vector<int> > &M, Loc &s, Loc &t)
{
	int m=M.size(), n=M[0].size();
	vector<vector<bool> > visited(m, vector<bool>(n, false));  // 标记数组 !!
	queue<Loc> Q;
	Q.push(s);   visited[s.i][s.j]=true;
	while( !Q.empty() )
	{
		Loc loc=Q.front(); Q.pop();  //出队列
		// 进队列
		for(int k=0; k<4; k++) 
		{
			Loc next={loc.i+di[k], loc.j+dj[k] };
			if(next.i<0 || next.i>=m)  continue;  // 越界 
			if(next.j<0 || next.j>=n)  continue;
			if(M[next.i][next.j]==0 )  continue;  // 不能撞墙
			if(visited[next.i][next.j]==true)  continue;  // 不能重复 
			Q.push(next);  visited[next.i][next.j]=true;
		}
	}
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
	Loc s={0  ,  0};
	Loc t={m-1,n-1};
	Bfs(M, s, t);
	return 0;
}
