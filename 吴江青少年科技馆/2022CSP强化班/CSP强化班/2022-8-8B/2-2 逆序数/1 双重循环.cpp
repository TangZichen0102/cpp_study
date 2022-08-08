#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
//  7, 2, 8, 1, 3, 4, 9, 5, 6 
//  6  1  5  0  0  0  2  0  0  = 14
int Count(vector<int> &v) 
{
	int n=v.size();
	int  cnt=0;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			cnt += (v[i]>v[j]);
	return cnt;
}

int main()
{
	//int a[]={7,2,8,1,3,4,9,5,6},n=9;  
	//vector<int> v(a,a+n);   //≥ı ºªØ 
	int n=100000;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		v[i]=rand();
	cout<<Count(v)<<endl;  // 15s 
	return 0;
}


