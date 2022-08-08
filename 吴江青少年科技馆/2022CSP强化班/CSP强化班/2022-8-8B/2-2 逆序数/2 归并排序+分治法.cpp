#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
//  7, 2, 8, 1, 3, 4, 9, 5, 6 
//  6  1  5  0  0  0  2  0  0  = 14

// ��v[si1]....v[ei1]��v[ei1+1]....v[ei2],�鲢��t[si1]....t[ei2]
/*
   v[si1]...v[i]55......v[ei1]
                          v[ei1+1].....v[j]5....v[ei2]
*/
int Merge(vector<int> &v, int si1,int ei1, int ei2, vector<int> &t)
{
	int cnt=0;
	int i=si1, j=ei1+1, k=si1;
	while(i<=ei1 && j<=ei2)
	{
		if(v[i]<v[j])
			t[k++]=v[i++];
		else
			t[k++]=v[j++],  cnt += ei1-i+1;
	}
	while(i<=ei1)	t[k++]=v[i++];
	while(j<=ei2)	t[k++]=v[j++];
	return cnt;
}
// ��v[left]...v[right]�����������ļ���������t[left]...t[right] 
int MSort(vector<int> &v, int left,int right, vector<int> &t)
{
	// ��ֹ���� 
	if(left>right)  return 0;
	if(left==right) 
	{
		t[left] = v[left];	return 0;  // ��֤�����t�� 
	}
	// �ֽ����� 
	int mid=(left+right)/2;
	int cnt1 = MSort(v, left,   mid,  t);  // ���ļ���
	int cnt2 = MSort(v, mid+1, right, t);  // �Ҳ�ļ��� 
	int cnt3 = Merge(t,left,mid,right, v);	// ���+���Ĺ鲢
	for(int i=left; i<=right; i++) t[i]=v[i];  // ��֤�����t�� 
	return cnt1+cnt2+cnt3;  
}

int Count(vector<int> &v)
{
	int n=v.size();
	vector<int> t(n);
	return MSort(v, 0, n-1, t);
	// v=t;
}


int main()
{
	//int a[]={7,2,8,1,3,4,9,5,6},n=9;  
	//vector<int> v(a,a+n);   //��ʼ�� 
	int n=100000;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		v[i]=rand();
	cout<<Count(v)<<endl;  // 15s  ->0.18s
	return 0;
}


