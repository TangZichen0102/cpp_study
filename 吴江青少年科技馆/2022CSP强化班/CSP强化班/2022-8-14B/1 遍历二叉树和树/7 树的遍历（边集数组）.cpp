#include <iostream>
using namespace std;

// 在边集合上进行树的先根遍历
struct Edge
{
	int parent;
	int child;
};

/*
           0
     1     2       3  
         4 5 6    7 8
		          9  
先根遍历 = 访问根 + 依次先根遍历每个子树 
0124563798

后根遍历 = 依次后根遍历每个子树 + 访问根
1456297830
*/
// 先根遍历以root为根的树 
void PreOrder(Edge Es[],int En, int root)
{
	cout<<root<<" " ;
	for(int i=0; i<En; i++)
		if(Es[i].parent==root)
			PreOrder(Es,En, Es[i].child);
}

int main()
{
	Edge Es[]={ {0,1},{0,2},{0,3},
				{2,4},{2,5},{2,6},
				{3,7},{3,8},{7,9}};
	int En=9;
	PreOrder(Es,En, 0);
}





