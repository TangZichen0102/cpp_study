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

譜蝶准泣tree[k], 恣頃徨頁tree[2*k+1] ��嘔頃徨頁tree[k2*k+2] 
                 幻准泣頁tree[(k-1)/2] 
*/
// 枠會演煽參tree[root]葎功准泣議屈我峯 
void PreOrder(string &tree)  
{


}

int main()
{
	string tree="CBGADH???EF";
	PreOrder(tree) ;   // CBADEFGH
	return 0;
}
 /*
 

　　　　　　　　 C
　　　　　　   /   \
　　　　　　  /　　 \
　　　　　　 B　　   G
　　　　　　/ \　　 /  \
　　　　   A   D   H    I
　　　　      /     \    \
　　　　     E      K    J
 
 */




