#include<bits/stdc++.h>
using namespace std;
void OutPut(vector<int> &v)
{
	vector<int>::iterator it;
	for(it=v.begin(); it!=v.end(); it++)
		cout<< *it <<" ";
	cout<<endl;
}
int Merge(vector<int> &v, int s1, int e1, int e2)
{
	vector<int>t(e2-s1+1);
	int k=0,i=s1,j=e1+1,cnt=0;
	while( i<=e1 && j<=e2 )
		if(v[i]<v[j])
			t[k++]=v[i++];
		else
			t[k++]=v[j++],
			cnt+=e1-i+1;
	while(i <= e1)	t[k++]=v[i++];
	while(j <= e2)	t[k++]=v[j++];
	for(int p=s1; p<=e2; p++)
		v[p] = t[p-s1];
	return cnt;
}
int MSort(vector<int> &v,int left,int right)
{
	if(left>=right)
		return 0;
	int mid=(left+right)>>1;
	int cnt1 = MSort(v, left,  mid);
	int cnt2 = MSort(v,mid+1,right);
	int cnt3 = Merge(v,left,mid,right);
	return cnt1 + cnt2 + cnt3;
}
int MergeSort(vector<int> &v)
{
	int n=v.size();
	return MSort(v, 0, n-1);
}
// 5 6 4 1 8 2 3 7 9
// 4 4 3 0 3 0 0 0 0
// 4+4+3+0+3+0+0+0+0=14
int main(){
	int a[]={5, 6, 4, 1, 8, 2, 3, 7, 9},n = 9;
	vector<int> v(a, a+n);
	cout<<MergeSort(v)<<endl;
	return 0;
}
