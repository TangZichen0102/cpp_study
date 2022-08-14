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
void PreOrder(string &tree, int root)  
{
	if(root>=tree.length())  return;  // Խ�� 
	if(tree[root]=='?')      return;  // �սڵ� 
	cout<<tree[root]<<" ";
	PreOrder(tree, 2*root+1) ;   // ���������tree[2*root+1]Ϊ���ڵ�������
	PreOrder(tree, 2*root+2) ;   // ���������tree[2*root+2]Ϊ���ڵ�������
}

// ���������tree[root]Ϊ���ڵ�Ķ����� 
void MidOrder(string &tree, int root)  
{
	if(root>=tree.length())  return;  // Խ�� 
	if(tree[root]=='?')      return;  // �սڵ� 
	MidOrder(tree, 2*root+1) ;   // ���������tree[2*root+1]Ϊ���ڵ�������
	cout<<tree[root]<<" ";
	MidOrder(tree, 2*root+2) ;   // ���������tree[2*root+2]Ϊ���ڵ�������
}

// ���������tree[root]Ϊ���ڵ�Ķ����� 
void PostOrder(string &tree, int root)  
{
	if(root>=tree.length())  return;  // Խ�� 
	if(tree[root]=='?')      return;  // �սڵ� 
	PostOrder(tree, 2*root+1) ;   // ���������tree[2*root+1]Ϊ���ڵ�������
	PostOrder(tree, 2*root+2) ;   // ���������tree[2*root+2]Ϊ���ڵ�������
	cout<<tree[root]<<" ";
}

int main()
{
	string tree="CBGADH???EF";
	//PreOrder(tree,0) ;   // CBADEFGH
	//MidOrder(tree,0) ;   // ABEDFCHG
	PostOrder(tree,0) ;   // AEFDBHGC
	return 0;
}





