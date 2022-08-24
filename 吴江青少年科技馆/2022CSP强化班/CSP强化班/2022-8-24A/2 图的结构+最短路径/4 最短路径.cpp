#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// 返回sd中最小值的下标imin, set[imin]必须是false 
int FindiMin(vector<int>& sd, vector<bool> &set)
{
	int imin=0;
	while(set[imin]==true)
		imin++;
	for(int i=imin+1; i<sd.size(); i++)
		if(set[i]==false && sd[i]<sd[imin])
			imin=i;
	return imin;
}

// 在G中，计算 从v到其余所有顶点的最短距离，存于sd[]中 
void Dijkstra(vector<vector<int> > &G, int sv, vector<int>& sd, vector<int > &prev)
{
	int n=G.size();
	vector<bool> set(n, false);  // set[i]==true:顶点i的最短路径长度已经确定 
	sd=G[sv];	// sd的初始化
	set[sv]=true;
	for(int i=1; i<n; i++)
	{
		// 在未确定最短距离的顶点中，找sd的最小值
		int w = FindiMin(sd, set);  set[w]=true;  // sv->w的最短路径长度已经确定 
		// 在未确定最短距离的顶点中，调整sd 
		for(int v=0; v<n; v++)
		{
			if(set[v]==true)   continue; // v胡最短路径长度已经能够确定
			if(sd[w]+G[w][v] < sd[v])
				sd[v] = sd[w]+G[w][v], prev[v]=w;  // 选择了w作为上一步顶点 
		}
	} 
} 
void OutputPath(vector<int > &prev, int ev)
{
	while( ev!=-1 )
	{
		cout<<ev<<" ";
		ev=prev[ev];
	}
	cout<<endl; 
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
	vector<int > prev(n, -1);    // prev[i]是到达顶点i之前的顶点 
	Dijkstra(G, sv, sd, prev);
	for(int ev=0; ev<n; ev++)
	{
		cout<<sv<<"->"<<ev<<": " <<sd[ev]<<endl;
		OutputPath(prev, ev);
	}
	return 0; 
}
