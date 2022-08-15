/*
题目来源
#2640、数字重排序
https://oj.shiyancang.cn/Problem/2640.html?index=3&cid=5174&type=4
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
unordered_map<string, int> dp;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("4.in", "r", stdin);
#endif
	LL sum = 1;
	for (int i = 0; i <= 62; i++)
	{
		string a = to_string(sum);
		sort(a.begin(), a.end());
		dp[a] = 1;
		sum *= 2;
	}

	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		cout << (dp[s] ? "Yes" : "No") << endl;
	}

	return 0;
}
/*
样例及推导

*/