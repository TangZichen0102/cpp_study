#include <iostream> 
#include <iomanip> 
using namespace std;
/*
���������������� 0
������������   /   \
������������  /���� \
������������ 1����   2
������������/ \����  /
��������   3   4    5  6 
��������      / \
�������� 7 8  9  10

��ĳ�ڵ�tree[k], ������tree[2*k+1] ���Һ�����tree[k2*k+2] 
                 ���ڵ���tree[(k-1)/2] 
*/
// ���������tree[root]Ϊ���ڵ�Ķ����� 
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
 

���������������� C
������������   /   \
������������  /���� \
������������ B����   G
������������/ \���� /  \
��������   A   D   H    I
��������      /     \    \
��������     E      K    J
 
 */




