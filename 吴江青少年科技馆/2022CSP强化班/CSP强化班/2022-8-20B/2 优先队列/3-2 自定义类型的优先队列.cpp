#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
	int id;
	int score;
} ;
bool operator<(const Node &n1, const Node &n2)
{
	return n1.id>n2.id;
	//return n1.score>n2.score;
}
int main()
{
	Node a[]={{6,91},{7,93},{4,95},{5,92},
	 	      {8,96},{9,98},{1,94},{2,90},{3,99}};
	int n=9;
	priority_queue<Node,vector<Node>, less<Node> > pq;   // 大根堆 
	//priority_queue<int,vector<int>, greater<int> > pq;   // 小根堆 
	for(int i=0; i<n; i++)
		pq.push(a[i]);
	while( !pq.empty() )
	{
		Node x=pq.top(); pq.pop();
		cout<<x.id<<" "<<x.score<<endl;
	}
    return 0;
}

