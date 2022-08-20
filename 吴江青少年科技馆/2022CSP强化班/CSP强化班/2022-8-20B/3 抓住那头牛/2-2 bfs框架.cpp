#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define MAX 100

// ����Ŀ�� 
int bfs(int x,int y)
{
	vector<bool>  visited(MAX,false);
	queue<int>  Q;
	Q.push(x), visited[x]=true; // ԭʼ��������У������ 
	while(!Q.empty()) 
	{
		x=Q.front(); Q.pop(); // ������ 
		if(x==y)
			return ?;
		// С��������У������
		if(x+1<MAX && visited[x+1]==false) Q.push(x+1), visited[x+1]=true; 
		if(x-1>=0  && visited[x-1]==false) Q.push(x-1), visited[x-1]=true;
		if(x*2<MAX && visited[x*2]==false) Q.push(x*2), visited[x*2]=true;
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








