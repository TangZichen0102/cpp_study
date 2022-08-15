#include <bits/stdc++.h>

using namespace std;
int m;
long long a[200010];
int premax = INT_MIN;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> m;
    while (m--)
    {
        int n;
        scanf("%d", &n);
        memset(a, 0, sizeof(a));
        for (int j = 0; j < n; j++)
            scanf("%lld", a + j);
        string f;
        cin >> f;
        int pos = 0;
        while (pos < n) {
            int start = pos;
            while (pos < n && f[pos] == '1') pos++;
            if(start != pos) sort(a + start, a + pos + 1);
            pos++;
        }
        cout << (is_sorted(a, a + n) ? "YES" : "NO") << endl;
    }
    return 0;
}