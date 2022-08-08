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
     7, 2, 8, 1, 3, 4, 9, 5, 6    有序子序列len=1
      2,7, 1,8,   3,4, 5,9,  6    有序子序列len=2
      1,2,7,8,     3,4,5,9,  6    有序子序列len=4
         1,2,3,4,5,7,8,9,    6    有序子序列len=8
           1,2,3,4,5,6,7,8,9,     有序子序列len=9
趟数=log2(n)        n=1000    log2(n)=10
                    n=10000   log2(n)=14
                    n=1000000 log2(n)=20
相邻有序序列的归并：
    两个完整序列的归并 
    1个完整序列和1个不完整序列的归并 
    1个序列的复制 
归并的去处：  需要缓冲区   空间复杂度O(n) 
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
/*
     7, 2, 8, 1, 3, 4, 9, 5, 6    有序子序列len=1
      2,7, 1,8,   3,4, 5,9,  6    有序子序列len=2
      1,2,7,8,     3,4,5,9,  6    有序子序列len=4
         1,2,3,4,5,7,8,9,    6    有序子序列len=8
           1,2,3,4,5,6,7,8,9,     有序子序列len=9
*/
int main()
{
	int a[]={7,2,8,1,3,4,9,5,6},n=9;  
	vector<int> v(a,a+n);   //初始化 
	//MergeSort(v);
	vector<int> t(n);
	Merge(v, 0, 0, 1, t);
	Merge(v, 2, 2, 3, t);
	Merge(v, 4, 4, 5, t);
	Merge(v, 6, 6, 7, t);
	Output(t);
	Merge(t, 0, 1, 3, v);
	Merge(t, 4, 5, 7, v);
	Output(v);
	return 0;
}


