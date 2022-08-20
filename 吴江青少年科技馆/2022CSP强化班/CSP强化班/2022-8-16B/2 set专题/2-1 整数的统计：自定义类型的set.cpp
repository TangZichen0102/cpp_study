#include <iostream> 
#include <iomanip> 
#include <set> 
using namespace std;

struct Node
{
	int x;
	int cnt;
};
int nn=0;   // 探针
// 运算符重载
// Node类型的<运算符重载
bool operator<(const Node &n1, const Node &n2) 
{
	nn++;
	return n1.x<n2.x;
}
void Output(set<Node> &S)
{
	for(set<Node>::iterator it=S.begin(); it!=S.end(); it++)
		cout<< it->x <<": "<< it->cnt<<endl;
	cout<<endl;
}

int main()
{
	int a[]={4,5,6,7,1,4,5,6,7,4,
			 5,6,7,8,2,3,8,9,2,3}, n=20;
	set<Node> S;  // 集合：没有重复数
	for(int i=0; i<n; i++) 
	{
		Node node={a[i], 1};
		S.insert( node );
	}
	Output(S); // 1:1  2:2 3:2 4:3  
	cout<<nn<<endl; 
	return 0;
}



