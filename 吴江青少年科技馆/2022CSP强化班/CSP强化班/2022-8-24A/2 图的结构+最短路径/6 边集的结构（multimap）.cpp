#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Edge
{
	int ev;    // �յ� 
	int cost;  // ���� 
};

void Output(multimap<int, Edge> &Edges)
{
	for(multimap<int, Edge>::iterator it=Edges.begin(); it!=Edges.end(); it++)
		cout<<it->first<<"->"
				<<it->second.ev<<": " 
				<<it->second.cost<<endl; 
}

int main() 
{
	freopen("Edge.txt","r", stdin);
	int vn,en;  cin>>vn>>en;
	multimap<int, Edge> Edges;   // <���int, ��Edge>
	for(int i=0; i<en; i++)
	{
		int sv; Edge e; 
		cin>>sv>>e.ev>>e.cost;
		Edges.insert( pair<int, Edge>(sv,e)  );
	}
	Output(Edges);
	return 0; 
}
