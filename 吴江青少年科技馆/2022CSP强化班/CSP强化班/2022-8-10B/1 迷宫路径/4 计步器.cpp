#include <iostream> 
#include <iomanip> 
#include <vector> 
using namespace std;

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
int step=1; 
int sd=0x7fffffff;   // 最短距离长度 
void Solve(vector<vector<int> > &M, int si,int sj, int ei,int ej)
{
	M[si][sj]=step;  step++; // 留下脚印 
	// 最终解决方法
	if(si==ei && sj==ej)
	{
		Output(M);
		if(step<sd) 
			sd=step;
	}
	else
	{
		// 中间的分解策略 
		// 越界  撞墙   重复路 
		int m=M.size(), n=M[0].size();
		if(sj+1<n  && M[si][sj+1]==0)  Solve(M, si,sj+1, ei,ej);  // 向东 
		if(si+1<m  && M[si+1][sj]==0)  Solve(M, si+1,sj, ei,ej);  // 向南
		if(sj-1>=0 && M[si][sj-1]==0)  Solve(M, si,sj-1, ei,ej);  // 向西 
		if(si-1>=0 && M[si-1][sj]==0)  Solve(M, si-1,sj, ei,ej);  // 向北 
	}
	step--;
	M[si][sj]=0; // 擦除脚印
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
	Solve(M, 0,0, m-1,n-1);
	cout<<sd-1<<endl;
	return 0;
}
