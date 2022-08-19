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
//a[]:   5, -6,  7, -3,  4 , 8, -9, 10,  1,  2 
//len[]: 1   1   2   2   3   4   1   5   3   4


//a[]:   4,  8, -9, 10,  1,  2,  5, -6,  7, -3
//len[]: 1   2   1   3   2   3   4   2   5   3
int GetLIS(int a[], int n)  // longest Increment Sequence 
{
	vector<int> len(n,1);
	for(int i=1; i<n; i++)
	{
		// len[i]=?
		for(int j=0; j<i; j++)
		{
			if(a[j]>a[i])  continue;
			if(len[j]+1>len[i])
				len[i] = len[j]+1;
		}
	}
	Output(len);
	return 0;
}
int main()
{
	int a[]={4, 8, -9, 10, 1,  2, 5, -6,  7, -3}, n=10;
	int len=GetLIS(a,n);  // longest Increment Sequence 
	cout<<len<<endl;
	return 0;
}


