#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define MAX 100100
struct Node
{
	int x;
	int sd;  // 到达x的最短路径长度 
};
// 最初的框架 
int bfs(int x,int y)
{
	vector<bool>  visited(MAX,false);
	queue<Node>  Q;
	Node node={x, 0};
	Q.push(node), visited[node.x]=true; // 原始问题进队列，做标记 
	while(!Q.empty()) 
	{
		node=Q.front(); Q.pop(); // 出队列 
		if(node.x==y)
			return node.sd;
		// 小问题进队列，做标记
		Node next1={node.x+1,node.sd+1};
		Node next2={node.x-1,node.sd+1};
		Node next3={node.x*2,node.sd+1};
		if(next1.x>=0 && next1.x<MAX && visited[next1.x]==false) Q.push(next1), visited[next1.x]=true; 
		if(next2.x>=0 && next2.x<MAX && visited[next2.x]==false) Q.push(next2), visited[next2.x]=true; 
		if(next3.x>=0 && next3.x<MAX && visited[next3.x]==false) Q.push(next3), visited[next3.x]=true; 
	}
}
int main()
{
	int x=5, y=18;
	for(y=1; y<30; y++) 
	{
		int sd = bfs(x,y); 
		cout<<y<<": "<<sd<<endl;
	}
    return 0;
}








