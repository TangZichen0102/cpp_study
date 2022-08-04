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
void Invert(vector<int> &v, int left, int right) 
{
	while(left<right)
	{
		swap(v[left], v[right]);
		left++, right--;
	}
}

// 1,2,3,4,5,6,7,8,9
// 9,8,7,6,5,4,3,2,1    全部逆序 
// 5,6,7,8,9,1,2,3,4    两次 局部逆序 
// 时间复杂度O(n) 
void Moves(vector<int> &v, int k)
{
	int n=v.size();
	Invert(v, 0,n-1);     // 全部逆序 
	Invert(v, 0, n-k-1);  // 前半段逆序 
	Invert(v, n-k, n-1);  // 后半段逆序 
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9},n=9;  
	vector<int> v(a,a+n);   //初始化 
	int k=4;   // 循环移位k次 
	Moves(v,k);
	Output(v);
	return 0;
}

