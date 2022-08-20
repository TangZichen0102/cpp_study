#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Output(vector<int> &a)
{
	for(int i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
	cout<<endl;	
}

// 找最长递增子序列的长度
//        0   1   2   3   4   5   6   7   8   9
//a[]:    5, -6,  7, -3,  4 , 8, -9, 10,  1,  2 
//len[]:  1   1   2   2   3   4   1   5   3   4
//prev[]:-1  -1   0   1   3   4  -1   5   3   8 

// 10 8 4 -3 -6

//        0   1   2   3   4   5   6   7   8   9
//a[]:    4,  8, -9, 10,  1,  2,  5, -6,  7, -3
//len[]:  1   2   1   3   2   3   4   2   5   3
//prev[]:-1   0  -1   1   2   4   5   2   6   7
int GetLIS(int a[], int n)  // longest Increment Sequence 
{
	// len[i]: 以a[i]为终点的递增子序列的最大长度 
	vector<int> len(n,1);
	// prev[i]: 以a[i]为终点的递增子序列的上一个数的下标 
	vector<int> prev(n,-1);
	for(int i=1; i<n; i++)
	{
		// len[i]=?
		for(int j=0; j<i; j++)
		{
			if(a[j]>a[i])  continue;
			if(len[j]+1>len[i])
				len[i] = len[j]+1,  prev[i]=j;
		}
	}
	Output(len);
	Output(prev);
	vector<int>::iterator it = max_element(len.begin(), len.end());
	int imax = it- len.begin();
	return *max_element(len.begin(), len.end()); // len[imax];
}
int main()
{
	int a[]={4, 8, -9, 10, 1,  2, 5, -6,  7, -3}, n=10;
	int len=GetLIS(a,n);  // longest Increment Sequence 
	cout<<len<<endl;
	return 0;
}


