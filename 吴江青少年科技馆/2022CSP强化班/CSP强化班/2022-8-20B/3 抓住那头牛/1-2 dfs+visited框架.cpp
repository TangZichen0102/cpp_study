#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define MAX 100500

// ×î³õµÄ¿ò¼Ü 
int dfs(int x,int y, vector<bool> &visited)
{
	visited[x]=true;
	if(x==y) 
		return ?;
	else
	{
		if(x+1<MAX && visited[x+1]==false) dfs(x+1,y, visited);
		if(x-1>=0  && visited[x-1]==false) dfs(x-1,y, visited);
		if(x*2<MAX && visited[x*2]==false) dfs(x*2,y, visited);
	}
	visited[x]=false;
}

int main()
{
	int x=5, y=18;
	vector<bool>  visited(MAX,false);
	cout<<dfs(x,y, visited)<<endl; 
    return 0;
}

