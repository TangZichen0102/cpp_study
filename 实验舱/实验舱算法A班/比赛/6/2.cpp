/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
LL a[200005];
LL minn = INT_MAX, maxn = INT_MIN;
LL Minn = INT_MAX;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        maxn = max(maxn, a[i]);
        minn = min(minn, a[i]);
    }
    for(int i = minn - 1; i <= maxn + 1; i++) {
        LL sum = 0;
        for(int j = i, k = 1; j <= i + n - 1; j++, k++) sum += abs(a[k] - j);
        Minn = min(sum, Minn);
    }
    cout << Minn;
    return 0;
}
/*
样例及推导

*/