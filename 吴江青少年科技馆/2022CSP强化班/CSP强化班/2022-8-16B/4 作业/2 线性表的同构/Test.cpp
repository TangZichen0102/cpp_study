#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

bool isSame(int a[], int b[], int n)
{
	// 数字对a[i]和b[i], 应该存入DIC 
	return true;
}
// DIC: 1:2,  2:5 ,   3:8,   4:0
int main()
{
	int n=11;
	int a[]={1,2,3,1,2,3,1,2,3,4,4};
	int b[]={2,5,8,2,5,8,2,5,8,0,0};
	int c[]={2,5,8,2,6,8,2,5,8,0,0};
	cout<<isSame(a,b,n)<<endl;  // true 
	cout<<isSame(a,c,n)<<endl;  // false
	return 0;
}

