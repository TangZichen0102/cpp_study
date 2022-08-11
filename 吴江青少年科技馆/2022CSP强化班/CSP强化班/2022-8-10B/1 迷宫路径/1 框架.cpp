#include <iostream> 
#include <vector> 
using namespace std;

void Output(vector<vector<int> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<m[i][j]<<"  ";
		cout<<endl;	
	}
} 
void Solve(vector<vector<int> > &M, int si,int sj, int ei,int ej)
{
	// 最终解决方法
	if(si==ei && sj==ej)
		return;
	// 中间的分解策略 
	Solve(M, si,sj+1, ei,ej);  // 向东 
	Solve(M, si+1,sj, ei,ej);  // 向南
	Solve(M, si,sj-1, ei,ej);  // 向西 
	Solve(M, si-1,sj, ei,ej);  // 向北 
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
	return 0;
}
