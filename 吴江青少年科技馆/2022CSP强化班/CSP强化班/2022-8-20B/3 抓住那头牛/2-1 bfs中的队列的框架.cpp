#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define MAX 100

// ����Ŀ�� 
/*
	vector<bool>  visited(MAX,false);
	visited[x]=true;  dist++;

	}
	visited[x]=false;  dist--;
*/
int bfs(int x,int y)
{
	queue<int>  Q;
	Q.push(x); // ԭʼ���������
	while(!Q.empty()) 
	{
		x=Q.front(); Q.pop(); // ������ 
		// С���������
		if(x+1<MAX ) Q.push(x+1);
		if(x-1>=0  ) Q.push(x-1);
		if(x*2<MAX ) Q.push(x*2);
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








