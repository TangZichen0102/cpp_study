#include<bits/stdc++.h>
using namespace std;
/*
          A
        /  \
       B    C
     /  \
    D   E
       / \
      F   G
*/
void PreOrder(string &tree, int root)
{
	if(root >= tree.size() || tree[root] == '?' )
		return;
	cout<<tree[root]<<" ";
	PreOrder(tree, 2*root+1);
	PreOrder(tree, 2*root+2);
}
void MidOrder(string &tree, int root)
{
	if(root >= tree.size() || tree[root] == '?' )
		return;
	MidOrder(tree, 2*root+1);
	cout<<tree[root]<<" ";
	MidOrder(tree, 2*root+2);
}
void BackOrder(string &tree, int root)
{
	if(root >= tree.size() || tree[root] == '?' )
		return;
	BackOrder(tree, 2*root+1);
	BackOrder(tree, 2*root+2);
	cout<<tree[root]<<" ";
}
int main(){
	string tree="ABCDE????FG";
	PreOrder(tree, 0);
	cout<<endl;
	MidOrder(tree, 0);
	cout<<endl;
	BackOrder(tree, 0);
	cout<<endl;
	return 0;
}
