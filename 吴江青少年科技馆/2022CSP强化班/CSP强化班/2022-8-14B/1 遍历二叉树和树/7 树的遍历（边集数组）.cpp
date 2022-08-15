#include <iostream>
using namespace std;

// �ڱ߼����Ͻ��������ȸ�����
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
�ȸ����� = ���ʸ� + �����ȸ�����ÿ������ 
0124563798

������� = ���κ������ÿ������ + ���ʸ�
1456297830
*/
// �ȸ�������rootΪ������ 
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





