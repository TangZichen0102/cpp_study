#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// 返回sd中最小值的下标imin, set[imin]必须是false 
int FindiMin(vector<int>& sd, vector<bool> &set)
{
	int imin=0;

	return imin;
}

// 在G中，计算 从v到其余所有顶点的最短距离，存于sd[]中 
void Dijkstra(vector<vector<int> > &G, int sv, vector<int>& sd)
{
	int n=G.size();
	vector<bool> set(n, false);  // set[i]==true:顶点i的最短路径长度已经确定 
	sd=G[sv];	// sd的初始化
	set[sv]=true;
	for(int i=1; i<n; i++)
	{
		// 在未确定最短距离的顶点中，找sd的最小值
		// sv->w的最短路径长度已经确定 
		// 在未确定最短距离的顶点中，调整sd 
		
				// v的最短路径长度已经能够确定
	} 
} 

int main() 
{
	freopen("g.txt","r", stdin);
	int n;  cin>>n;
	vector<vector<int> > G(n, vector<int>(n));  // 邻接矩阵
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>G[i][j];
	int sv=0;
	vector<int>  sd(n);   // 最短路径长度的向量 
	Dijkstra(G, sv, sd);
	for(int ev=0; ev<n; ev++)
		cout<<sv<<"->"<<ev<<": " <<sd[ev]<<endl;
	return 0; 
}
