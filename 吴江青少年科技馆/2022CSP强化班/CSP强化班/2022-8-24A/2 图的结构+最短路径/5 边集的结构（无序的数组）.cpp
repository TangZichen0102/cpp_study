#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Edge
{
	int sv, ev;
	int cost;
};

int main() 
{
	freopen("g.txt","r", stdin);
	int vn,en;  cin>>vn>>en;
	vector<Edge> Edges(en);  // ÎÞÐòµÄ±ß¼¯
	for(int i=0; i<en; i++)
		cin>>Edges[i].sv>>Edges[i].ev>>Edges[i].cost;
	return 0; 
}
