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

int BinSearch(vector<int> &v, int left,int right, int x)
{
	//  闭区间[left, right]  
	while( left<=right )    //  没有等号，一半的数，找不到 
	{
		int mid=(left+right)/2;
		if(v[mid]==x)
			return mid;
		if(v[mid]>x)
			right=mid-1;       //  闭区间[left, mid-1]
		else
			left=mid+1;       //  闭区间[mid+1, right]
	}
	// left > right 
	//cout<<left<<"  "<<right <<endl;  // 超大数值：9 8 
	cout<<left<<"  "<<right <<endl;  // 超小数值：0 -1
	return -1;
}

int main()
{
	int a[]={11,22,33,44,55,66,77,88,99},n=9;  
	vector<int> v(a,a+n);   //初始化 
	int k=BinSearch(v, 0,n-1, 1);
	cout<<k<<endl;
	return 0;
}


