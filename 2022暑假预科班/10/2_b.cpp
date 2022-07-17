#include <bits/stdc++.h>

using namespace std;

int dfs(int N, int K)
{
    if (N == 1)
        return 0;
    if (K <= 1 << N - 2)
        return dfs(N - 1, K);
    return dfs(N - 1, K - (1 << N - 2)) ^ 1;
}

int t, n, k;
int main()
{
#ifndef ONLIEN_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        cout << dfs(n, k) << endl;
    }
    return 0;
}