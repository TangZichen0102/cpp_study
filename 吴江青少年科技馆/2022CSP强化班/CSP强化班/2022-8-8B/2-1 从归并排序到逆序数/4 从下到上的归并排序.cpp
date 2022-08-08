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
// 将v中的长度为len的有序子序列，两两归并到t 
void MergePass(vector<int> &v, int len, vector<int> &t)
{
	int i, n=v.size();
	for(i=0; (i+2)*len-1<n; i+=2)   // 两个完整序列的归并 
		Merge(v, i*len, (i+1)*len-1, (i+2)*len-1, t);
	if(  (i+1)*len < n  )
		Merge(v, i*len, (i+1)*len-1, n-1, t);   //  1个完整序列和1个不完整序列的归并 
	else
		for(int j=i*len; j<n; j++) 	t[j]=v[j];  //  1个序列的复制 
}

void MergeSort(vector<int> &v)
{
	int n=v.size();
	vector<int> t(n);
	int len=1;
	while( len<n )
	{
		MergePass(v, len, t);	len*=2;  //  v -> t
		if(len<n)
		{
			MergePass(t, len, v);	len*=2; //  t -> v
		}
		else
			v=t;    //  t -> v
	}	
}

int main()
{
	int a[]={7,2,8,1,3,4,9,5,6},n=9;  
	vector<int> v(a,a+n);   //初始化 
	MergeSort(v);
	Output(v);
	return 0;
}


