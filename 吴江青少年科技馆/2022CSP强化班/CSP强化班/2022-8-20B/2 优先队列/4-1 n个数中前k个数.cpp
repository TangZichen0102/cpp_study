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
	int i, n,k;  cin>>n>>k;  // n�ܴ�  k��С 
	priority_queue<int>  pq;   // ��ѡ�˵ĳɼ��� : ����� 
	// k���������У�O(k* log2(k) ) 
	for(i=0; i<k; i++) 
	{
		int x; cin>>x; 	pq.push(x);
	}
	// n-k������������룺O((n-k)* log2(k) ) 
	for(; i<n; i++) 
	{
		int x; cin>>x;   
		if(x < pq.top() )
		{
			pq.pop();  // ɾ����ѡ����������� 
			pq.push(x);
		}
	}
	cout<<pq.size()<<endl;
	//Output(pq);
    return 0;
}

