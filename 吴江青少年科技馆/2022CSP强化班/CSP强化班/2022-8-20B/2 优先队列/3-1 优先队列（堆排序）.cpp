#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int a[]={6,7,4,5,8,9,1,2,3} , n=9;
	//priority_queue<int> pq;   // ����� 
	priority_queue<int,vector<int>, less<int> > pq;   // ����� 
	//priority_queue<int,vector<int>, greater<int> > pq;   // С���� 
	for(int i=0; i<n; i++)
		pq.push(a[i]);
	while( !pq.empty() )
	{
		int x=pq.top(); pq.pop();
		cout<<x<<" " ;
	}
    return 0;
}

