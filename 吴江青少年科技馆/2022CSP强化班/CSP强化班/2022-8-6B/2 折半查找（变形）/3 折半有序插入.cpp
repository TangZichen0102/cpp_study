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

// 在升序序列v[0]...v[n-1]中，查找第一个比x大的数的下标
// [left   mid  right]
//          X                      -》[left, mid] 
int BinSearch(vector<int> &v, int x)
{
	int left=0, right=v.size()-1;
	while( left<right )    //  没有等号，一半的数，找不到 
	{
		int mid=(left+right)/2;
		if(v[mid]>x)
			right=mid;        //  闭区间[left, mid-1]
		else
			left=mid+1;       //  闭区间[mid+1, right]
	}
	if(v[left]>x) 
		return left;  // 找到了 
	return v.size();  // 没有找到	 
}

void BinInsert(vector<int> &v,int x)
{
	int k=BinSearch(v,x);  //找第一个比x大的数的下标
	v.insert(v.begin()+k, x);  // 移位工作，不可能减少 
}
int main()
{
	int a[]={11,22,33,44,55,66,77,88,99},n=9;  
	vector<int> v(a,a+n);  
	for(int x=10; x<110; x+=10)
	{
		BinInsert(v,x) ;
		Output(v);
	}
	return 0;
}





