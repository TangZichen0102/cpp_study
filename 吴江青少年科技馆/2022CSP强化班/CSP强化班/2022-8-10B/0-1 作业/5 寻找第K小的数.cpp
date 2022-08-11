#include<bits/stdc++.h>
using namespace std;
void OutPut(vector<int> &v)
{
	vector<int>::iterator it;
	for(it=v.begin(); it!=v.end(); it++)
		cout<< *it <<" ";
	cout<<endl;
}

int DivPart(vector<int> &v,int left,int right)
{
	int tmp=v[left];
	while(left<right)
	{
		while( left < right && v[right] >= tmp )
			right--;
		if(left < right)
			v[left]=v[right],left ++;
		while( left < right && v[ left] <= tmp )
			left ++;
		if(left < right)
			v[right]=v[left],	right--;
	}
	v[left] = tmp;
	return left;
}
//                                 100      200     20
int FindKthMin(vector<int> &v,int left,int right,int x)
{
	if(left == right)
		return v[left];
	int n=v.size();
	int k=DivPart(v,left,right);
	// 130  20
	if( k == x )
		return v[k];
	if(k > x)
		return FindKthMin(v,left,k-1,   x);
	else
		return FindKthMin(v, k+1,right, x);
}
int main(){
	int a[]={55, 66, 44, 11, 88, 22, 33, 77, 99}, n = 9;
	for(int i=0;i<n;i++)
	{
		vector<int> v(a, a+n);
		cout<<FindKthMin(v,0,n-1, i)<<endl;
	}
	return 0;
}
