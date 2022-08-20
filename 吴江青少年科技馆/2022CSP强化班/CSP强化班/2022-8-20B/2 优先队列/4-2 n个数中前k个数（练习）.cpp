#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

void Output(priority_queue<int>  &pq) 
{
	while(!pq.empty())
	{
		？？？？？？？？？？ 
	}
	cout<<endl;	
}

int main()
{
	freopen("2.txt","r",stdin);
	int i, n,k;  cin>>n>>k;  // n很大  k较小 
	priority_queue<int>  pq;   // 候选人的成绩单 : 大根堆 
	// k个数进队列：O(k* log2(k) ) 


	// n-k个数的有序插入：O((n-k)* log2(k) ) 


	cout<<pq.size()<<endl;
	//Output(pq);
    return 0;
}

