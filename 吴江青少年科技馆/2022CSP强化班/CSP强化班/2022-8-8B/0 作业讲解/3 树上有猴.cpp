#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,w;
	cin >> n >> w;
	int maxdown=0, maxup=0;  // �����ĺ��ӵ����ֵmaxup   // �����ĺ��ӵ����ֵmaxdown
	int sum=0;    // ǰ׺�� 
	while( n-- )
	{
		int x; cin >> x;
		sum +=x;       // ǰ׺�� 
		if(sum>0)
			maxup = max(maxup, sum);
		if(sum<0)
			maxdown = max(maxdown, -sum);
	}
	int Min=maxdown, Max=w-maxup; 
	cout << Max-Min+1;
	return 0;
} 
