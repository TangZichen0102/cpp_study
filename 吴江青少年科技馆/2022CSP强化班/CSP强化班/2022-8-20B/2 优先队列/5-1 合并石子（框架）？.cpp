#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
// �ϲ�ʯ�ӵ���С���� 
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
	
	int sum=0;   // �����ܺ� 
	// ȱ��n-1�κϲ��Ĺ���
	 
	while(!pq.empty())
	{
		cout<<pq.top()<<'\t';
		pq.pop();
	}
	cout<<sum;
    return 0;
}

