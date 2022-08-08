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
// 时间复杂度： O( log2(n) ) 
// n=1000      log2(n)=10
// n=1000K     log2(n)=20
// n=1000M     log2(n)=30
int BinSearch(vector<int> &v, int left,int right, int x)
{
	if(left>right)  // 若有等号，有一半的数，找不到 
		return -1;
	int mid=(left+right)/2;
	if(v[mid]==x)
		return mid;
	if(v[mid]>x)
		return BinSearch(v,left, mid-1, x); 
	else
		return BinSearch(v,mid+1,right, x); 
}

int main()
{
	int a[]={11,22,33,44,55,66,77,88,99},n=9;  
	vector<int> v(a,a+n);   //初始化 
//	int k=BinSearch(v, x);
	// 黑盒测试法 
	for(int i=0; i<n; i++) 
	{
		int k=BinSearch(v, 0,n-1, v[i]);
		cout<<v[i]<<":  "<<k<<endl;
	}
	return 0;
}
/*
二叉判定树 
                            B(0,8)
         B(0,3)             v[4]                B(5,8)
  B(0,0)  v[1]  B(2,3)                   B(5,5)  v[6]   B(7,8)
                 v[2]  B(3,3)                            v[7]  B(8,8)
                
                
                




*/
