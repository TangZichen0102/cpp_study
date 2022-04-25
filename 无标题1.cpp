#include<bits/stdc++.h>

using namespace std;
int n, x, s[1000001];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> x;
		if(x) s[i] = s[i - 1] + 1;
		else s[i] = s[i - 1] -1;
	}
	int cnt = 0;
	for(int i = 1; i <= n - 1; i++)
		for(int j = cnt + i; j <= n; j++) cnt = j - i + 1;
	cout << cnt;
	return 0;
}

