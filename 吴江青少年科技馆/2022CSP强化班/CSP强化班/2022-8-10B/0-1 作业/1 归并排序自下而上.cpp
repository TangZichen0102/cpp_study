#include<bits/stdc++.h>
using namespace std;
void OutPut(vector<int> &v)
{
	vector<int>::iterator it;
	for(it=v.begin(); it!=v.end(); it++)
		cout<< *it <<" ";
	cout<<endl;
}
void Merge(vector<int> &v, int s1, int e1, int e2)
{
	vector<int>t(e2-s1+1);
	int k=0,i=s1,j=e1+1;
	while( i<=e1 && j<=e2 )
		if(v[i]<v[j])
			t[k++]=v[i++];
		else
			t[k++]=v[j++];
	while(i <= e1)	t[k++]=v[i++];
	while(j <= e2)	t[k++]=v[j++];
	for(int p=s1; p<=e2; p++)
		v[p] = t[p-s1];
}
void MergePass(vector<int> &v, int len)
{
	int n=v.size(),i;
	for(i=0; (i+2)*len-1<n ;i+=2)
		Merge(v, i*len, (i+1)*len-1, (i+2)*len-1);
	//下次的开始下标为 i*len , 结束下标为 (i+1)*len-1
	if( (i+1)*len-1<n-1 )
		Merge(v, i*len, (i+1)*len-1, n-1);
}
void MergeSort(vector<int> &v)
{
	int n=v.size();
	for(int i=1; i<n; i*=2)
		MergePass(v, i);
}
int main(){
	int a[]={5, 6, 4, 1, 8, 2, 3, 7, 9},n = 9;
	vector<int> v(a, a+n);
	MergeSort(v);
	OutPut(v);
	return 0;
}
