#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
	int x;
	int sd;  // 到达x的最短路径长度 
};
// 最初的框架 
int bfs(int x,int y)
{
	set<int> visited;  // 有序的笔记本 
	queue<Node>  Q;
	Node node={x, 0};
	Q.push(node), visited.insert(node.x); // 原始问题进队列，做标记(记入笔记本) 
	while(!Q.empty()) 
	{
		node=Q.front(); Q.pop(); // 出队列 
		if(node.x==y)
			return node.sd;
		// 小问题进队列，做标记
		Node next1={node.x+1,node.sd+1};
		Node next2={node.x-1,node.sd+1};
		Node next3={node.x*2,node.sd+1};
		if( visited.find(next1.x) == visited.end() ) Q.push(next1), visited.insert(next1.x); 
		if( visited.find(next2.x) == visited.end() ) Q.push(next2), visited.insert(next2.x);
		if( visited.find(next3.x) == visited.end() ) Q.push(next3), visited.insert(next3.x);
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








