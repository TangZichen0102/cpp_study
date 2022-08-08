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

// 查找x的等值区间的左边界 
// [left, mid, right] 
//         x             => [left, mid] 
int SearchLeft(vector<int> &v, int left,int right, int x)
{
	while( left<right )   
	{
		int mid=(left+right)/2;
		if(v[mid]==x)
			right=mid;  
		else
			if(v[mid]>x)
				right=mid-1;  
			else
				left=mid+1;   
	}
	if(v[left]==x) 
		return left;
	return -1;
}

int main()
{
	int a[]={22,22,22,22,33,33,77,88,99},n=9;  
	vector<int> v(a,a+n);   //初始化 
	int x=99;
	int k=SearchLeft(v, 0,n-1, x); // 2
	//int k=SearchRight(v, 0,n-1, x); // 5
	cout<<k<<endl;
	return 0;
}


