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
*/
// ��v[i]...v[j], ����v[i], �������� 
int DivPart(vector<int> &v, int i, int j)
{
	int tmp=v[i];   // �յ����� 
	while( i<j )
	{
		while(i<j && v[j]>=tmp) j--;
		if(i<j)  v[i++]=v[j];     // �յ����� 
		while(i<j && v[i]<tmp) i++;
		if(i<j)  v[j--]=v[i];     // �յ����� 
	}
	v[i]=tmp;
	return i;
}
//  v[left] .......v[k] (......... ith .........v[right])
//               ��k-leftС   ��ithС
int FindIth(vector<int> &v, int left, int right, int ith)
{
	if(left==right)  return v[left];
	int k=DivPart(v,left,right);
	// ���ۣ�v[k]��v[left] ....v[right]�еĵ�k-leftС���� 
	if(k-left==ith)  return v[k];
	if(k-left>ith)
		return FindIth(v, left, k-1, ith);  // ������� 
	else
		return FindIth(v, k+1,right,  ith-(k-left+1) );   // ���Ҳ��� ith-(k-left+1) ������ 
}

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
	for(int ith=0; ith<n; ith++)
	{
		vector<int> v(a,a+n);   //��ʼ�� 
		cout<<FindIth(v, 0, n-1, ith)<<endl; // 1 2 3 ...9
	}
	return 0;
}


