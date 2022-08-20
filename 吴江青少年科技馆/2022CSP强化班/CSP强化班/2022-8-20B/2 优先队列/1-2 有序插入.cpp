#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

void Output(int a[], int n) 
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;	
}
int Insert(int a[], int n, int x) 
{
	int i;
	for(i=n-1; i>=0 && a[i]>x; i--)
		a[i+1]=a[i];
	a[i+1]=x;
	return n+1;
}

// 找前k小的数 
// 时间复杂度：O( k*k+(n-k)*k )  = O(n*k) 
int main()
{
	freopen("2.txt","r",stdin);
	int i, n,k;  cin>>n>>k;  // n很大  k较小 
	int a[k];    // 候选人的成绩单 
	// k个数的有序插入：O(k*k) 
	for(i=0; i<k; i++) 
	{
		int x; cin>>x; 
		Insert(a,i,x);   // 有序插入 
	}
	// a[0]....a[k-1]是升序序列  91 ... 99 100
	// n-k个数的有序插入：O((n-k)*k) 
	for(; i<n; i++) 
	{
		int x; cin>>x;   // 89  95
		if(x < a[k-1] )
			Insert(a,k-1, x);  // 舍去原来的a[k-1] 
	}
	Output(a,k);
    return 0;
}

