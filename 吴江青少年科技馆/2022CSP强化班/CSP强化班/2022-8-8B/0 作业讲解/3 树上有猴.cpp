#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,w;
	cin >> n >> w;
	int maxdown=0, maxup=0;  // 上树的猴子的最大值maxup   // 下树的猴子的最大值maxdown
	int sum=0;    // 前缀和 
	while( n-- )
	{
		int x; cin >> x;
		sum +=x;       // 前缀和 
		if(sum>0)
			maxup = max(maxup, sum);
		if(sum<0)
			maxdown = max(maxdown, -sum);
	}
	int Min=maxdown, Max=w-maxup; 
	cout << Max-Min+1;
	return 0;
} 
