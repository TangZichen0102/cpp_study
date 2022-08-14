#include <iostream> 
#include <iomanip> 
using namespace std;
/*
　　　　　　　　 0
　　　　　　   /   \
　　　　　　  /　　 \
　　　　　　 1　　   2
　　　　　　/ \　　  /
　　　　   3   4    5  6 
　　　　      / \
　　　　 7 8  9  10

设某节点tree[k], 左孩子是tree[2*k+1] ，右孩子是tree[k2*k+2] 
                 父节点是tree[(k-1)/2] 
*/
// 先序遍历以tree[root]为根节点的二叉树 
void PreOrder(string &tree, int root)  
{
	if(root>=tree.length())  return;  // 越界 
	if(tree[root]=='?')      return;  // 空节点 
	cout<<tree[root]<<" ";
	PreOrder(tree, 2*root+1) ;   // 先序遍历以tree[2*root+1]为根节点左子树
	PreOrder(tree, 2*root+2) ;   // 先序遍历以tree[2*root+2]为根节点右子树
}

int main()
{
	string tree="CBGADH???EF";
	PreOrder(tree,0) ;   // CBADEFGH
	return 0;
}





