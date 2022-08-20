#include<bits/stdc++.h>
using namespace std;
struct Edge
{
	int father;
	int son;
};
void PreOrder(Edge a[], int n, int root)
{
	cout<<root<<" ";
	for(int i=0; i<n; i++)
		if(a[i].father==root)
			PreOrder(a, n, a[i].son);
}
void BackOrder(Edge a[], int n, int root)
{
	for(int i=0; i<n; i++)
		if(a[i].father==root)
			BackOrder(a, n, a[i].son);
	cout<<root<<" ";
}
int main(){
	Edge a[6]={{1,3},{3,5},{1,4},{4,6},{5,7},{1,9}};
	int n=6;
	PreOrder(a, n, 1);
	cout<<endl;
	BackOrder(a, n, 1);
	return 0;
}
