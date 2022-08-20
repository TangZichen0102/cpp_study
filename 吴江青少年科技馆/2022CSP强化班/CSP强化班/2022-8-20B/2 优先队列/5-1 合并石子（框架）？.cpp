#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
// 合并石子的最小代价 
int main()
{
	freopen("5.txt","r",stdin);
	priority_queue<int,vector<int>, greater<int> > pq;
	int n;  cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;	cin>>x;
		pq.push(x);
	}
	
	int sum=0;   // 代价总和 
	// 缺少n-1次合并的过程
	 
	while(!pq.empty())
	{
		cout<<pq.top()<<'\t';
		pq.pop();
	}
	cout<<sum;
    return 0;
}

