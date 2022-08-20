#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define MAX 100

// 最初的框架 
int sd=INT_MAX; 
int dfs(int x,int y, vector<bool> &visited, int &dist)
{
	visited[x]=true;  dist++;
	if(x==y) 
	{
		cout<<dist<<"  ";
		if(dist<sd) 
			sd=dist;
	}		
	else
	{
		if(x+1<MAX && visited[x+1]==false) dfs(x+1,y, visited,dist);
		if(x-1>=0  && visited[x-1]==false) dfs(x-1,y, visited,dist);
		if(x*2<MAX && visited[x*2]==false) dfs(x*2,y, visited,dist);
	}
	visited[x]=false;  dist--;
}

int main()
{
	int x=5, y=18;
	vector<bool>  visited(MAX,false);
	int dist=0;   // 全程路径长度的记录者 
	dfs(x,y, visited, dist); 
	cout<<sd<<endl;
    return 0;
}

