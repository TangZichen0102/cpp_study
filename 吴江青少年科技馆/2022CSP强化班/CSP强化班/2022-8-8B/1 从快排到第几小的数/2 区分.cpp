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
     7, 2, 8, 1, 3, 4, 9, 5, 6
中庸：中间大的数，放到中间位置上；  左侧小   右侧大 
中庸：  任意的数，放到目标位置上；  左侧小   右侧大 
        7, 2, 8, 1, 3, 4, 9, 5, 6
区分：O(n) 
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
空档在左   v[j] ? tmp
空档在右   v[i] ? tmp           
*/
// 对v[i]...v[j], 利用v[i], 进行区分 
int DivPart(vector<int> &v, int i, int j)
{
	int tmp=v[i];   // 空档在左 
	while( i<j )
	{
		while(i<j && v[j]>=tmp) j--;
		if(i<j)  v[i++]=v[j];     // 空档在右 
		while(i<j && v[i]<tmp) i++;
		if(i<j)  v[j--]=v[i];     // 空档在左 
	}
	v[i]=tmp;
	return i;
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
	vector<int> v(a,a+n);   //初始化 
	QuickSort(v, 0, n-1);
	Output(v);
	return 0;
}


