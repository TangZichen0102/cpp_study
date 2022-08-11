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
			v[left]=v[right],
			left ++;
		while( left < right && v[ left] <= tmp )
			left ++;
		if(left < right)
			v[right]=v[left],
			right--;
	}
	v[left] = tmp;
	return left;
}

void QuickSort(vector<int> &v,int left,int right)
{
	if(left >= right)
		return;
	int n=v.size();
	int k=DivPart(v,left,right);
	QuickSort(v,left,  k-1);
	QuickSort(v, k+1,right);
}
int main(){
	int a[]={5, 6, 4, 1, 8, 2, 3, 7, 9}, n = 9;
	vector<int> v(a, a+n);
	QuickSort(v,0,n-1);
	OutPut(v);
	return 0;
}
