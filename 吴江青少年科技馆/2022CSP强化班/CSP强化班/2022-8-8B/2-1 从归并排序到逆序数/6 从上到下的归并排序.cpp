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
     (7, 2, 8, 1, 3, 4, 9, 5, 6)  
     (7, 2, 8, 1, 3), (4, 9, 5, 6)  
     (7, 2, 8)(1, 3), (4, 9)(5, 6)  
     (7, 2)(8)(1)(3), (4)(9)(5)(6)  
     (7)(2)(8)(1)(3), (4)(9)(5)(6)    �ֽ⵽��
     (2, 7)(8)(1, 3), (4, 9)(5, 6)    ��ʼ�鲢 
     (2, 7, 8)(1, 3), (4, 9)(5, 6)  
     (1, 2, 3, 7, 8), (4, 5, 6, 9)  
       (1, 2, 3, 4, 5, 6, 7, 8 9)  
*/
// �����������еĹ鲢��
// ��v[si1]....v[ei1]��v[ei1+1]....v[ei2],�鲢��t[si1]....t[ei2]
void Merge(vector<int> &v, int si1,int ei1, int ei2, vector<int> &t)
{
	int i=si1, j=ei1+1, k=si1;
	while(i<=ei1 && j<=ei2)
	{
		if(v[i]<v[j])
			t[k++]=v[i++];
		else
			t[k++]=v[j++];
	}
	while(i<=ei1)	t[k++]=v[i++];
	while(j<=ei2)	t[k++]=v[j++];
}
// ��v[left]...v[right]���й鲢���򣬴���t[left]...t[right] 
void MSort(vector<int> &v, int left,int right, vector<int> &t)
{
	// ��ֹ���� 
	if(left>right)  return;
	if(left==right) 
	{
		t[left] = v[left];	return;  // ��֤�����t�� 
	}
	// �ֽ����� 
	int mid=(left+right)/2;
	MSort(v, left,   mid,  t);  // �������� 
	MSort(v, mid+1, right, t);  // �Ҳ������ 
	Merge(t,left,mid,right, v);	// ���+���Ĺ鲢
	for(int i=left; i<=right; i++) t[i]=v[i];  // ��֤�����t�� 
}

void MergeSort(vector<int> &v)
{
	int n=v.size();
	vector<int> t(n);
	MSort(v, 0, n-1, t);
	v=t;
}

int main()
{
	int a[]={7,2,8,1,3,4,9,5,6},n=9;  
	vector<int> v(a,a+n);   //��ʼ�� 
	MergeSort(v);
	Output(v);
	return 0;
}


