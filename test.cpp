/*
题目来源

*/
#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
const int N = 1e6 + 10;
int n, a[N];
int cnt[3], A[3], B[3], C[3];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int l = cnt[0], r = cnt[0] + cnt[1];
    for (int i = 0; i < l; i++) A[a[i]]++;
    for (int i = l; i < r; i++) B[a[i]]++;
    for (int i = r; i < n; i++) C[a[i]]++;
    cout << max(C[0], A[2]) + A[1] + C[1];
    return 0;
}
/*
样例及推导

*/