#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

void Output(priority_queue<int>  &pq) 
{
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";  pq.pop();
	}
	cout<<endl;	
}

int main()
{
	freopen("2.txt","r",stdin);
	int i, n,k;  cin>>n>>k;  // n很大  k较小 
	priority_queue<int>  pq;   // 候选人的成绩单 : 大根堆 
	// k个数进队列：O(k* log2(k) ) 
	for(i=0; i<k; i++) 
	{
		int x; cin>>x; 	pq.push(x);
	}
	// n-k个数的有序插入：O((n-k)* log2(k) ) 
	for(; i<n; i++) 
	{
		int x; cin>>x;   
		if(x < pq.top() )
		{
			pq.pop();  // 删掉候选名单中最大数 
			pq.push(x);
		}
	}
	cout<<pq.size()<<endl;
	//Output(pq);
    return 0;
}

