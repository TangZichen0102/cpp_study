#include<iostream>
#include<vector>
using namespace std;

void Output(vector<int> &v) 
{
	vector<int>::iterator it;    // ������  ��ȫָ�� 
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
/*
     7, 2, 8, 1, 3, 4, 9, 5, 6
��ӹ���м��������ŵ��м�λ���ϣ�  ���С   �Ҳ�� 
��ӹ��  ����������ŵ�Ŀ��λ���ϣ�  ���С   �Ҳ�� 
        7, 2, 8, 1, 3, 4, 9, 5, 6
���֣�O(n) 
        i                       j 
        X, 2, 8, 1, 3, 4, 9, 5, 6    tmp:7 
        i  i  i                 j 
        6, 2, 8, 1, 3, 4, 9, 5, X    tmp:7 
        i  i  i              j  j 
        6, 2, X, 1, 3, 4, 9, 5, 8    tmp:7 
        i  i  i  i  i  i  i  j  j 
        6, 2, 5, 1, 3, 4, 9, X, 8    tmp:7 
        i  i  i  i  i  i  ij j  j 
        6, 2, 5, 1, 3, 4, 7, 9, 8    tmp:7 
�յ�����   v[j] ? tmp
�յ�����   v[i] ? tmp           

         6, 7, 2, 8, 1, 3, 4, 9, 5
         i  i  i  i  i ij  j  j  j
		 5, 4, 2, 3, 1, 6, 8, 9, 7     tmp:6
*/

void QuickSort(vector<int> &v, int left, int right)
{
	if(left>=right)  return;
	int k=DivPart(v,left,right);
	QuickSort(v,left, k-1);
	QuickSort(v,k+1 , right);
}
int main()
{
	int a[]={7,2,8,1,3,4,9,5,6},n=9;  
	vector<int> v(a,a+n);   //��ʼ�� 
	QuickSort(v);
	Output(v);
	return 0;
}


