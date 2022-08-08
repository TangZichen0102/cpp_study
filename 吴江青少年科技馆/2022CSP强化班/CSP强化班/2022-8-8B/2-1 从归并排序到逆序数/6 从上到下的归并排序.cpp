#include<iostream>
#include<vector>
using namespace std;

void Output(vector<int> &v) 
{
	vector<int>::iterator it;    // 迭代器  安全指针 
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
/*
     (7, 2, 8, 1, 3, 4, 9, 5, 6)  
     (7, 2, 8, 1, 3), (4, 9, 5, 6)  
     (7, 2, 8)(1, 3), (4, 9)(5, 6)  
     (7, 2)(8)(1)(3), (4)(9)(5)(6)  
     (7)(2)(8)(1)(3), (4)(9)(5)(6)    分解到底
     (2, 7)(8)(1, 3), (4, 9)(5, 6)    开始归并 
     (2, 7, 8)(1, 3), (4, 9)(5, 6)  
     (1, 2, 3, 7, 8), (4, 5, 6, 9)  
       (1, 2, 3, 4, 5, 6, 7, 8 9)  
*/
// 相邻有序序列的归并：
// 将v[si1]....v[ei1]和v[ei1+1]....v[ei2],归并到t[si1]....t[ei2]
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
// 对v[left]...v[right]进行归并排序，存入t[left]...t[right] 
void MSort(vector<int> &v, int left,int right, vector<int> &t)
{
	// 终止条件 
	if(left>right)  return;
	if(left==right) 
	{
		t[left] = v[left];	return;  // 保证结果在t中 
	}
	// 分解条件 
	int mid=(left+right)/2;
	MSort(v, left,   mid,  t);  // 左侧的排序 
	MSort(v, mid+1, right, t);  // 右侧的排序 
	Merge(t,left,mid,right, v);	// 左侧+左侧的归并
	for(int i=left; i<=right; i++) t[i]=v[i];  // 保证结果在t中 
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
	vector<int> v(a,a+n);   //初始化 
	MergeSort(v);
	Output(v);
	return 0;
}


