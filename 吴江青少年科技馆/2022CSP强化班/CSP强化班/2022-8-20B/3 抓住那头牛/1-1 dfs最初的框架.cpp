#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
// ����Ŀ�� 
int dfs(int x,int y)
{
	if(x==y) 
		return ?;
	else
	{
		dfs(x+1,y);
		dfs(x-1,y);
		dfs(x*2,y);
	}
}

int main()
{
	int x=5, y=18;
	cout<<dfs(x,y)<<endl; 
    return 0;
}

