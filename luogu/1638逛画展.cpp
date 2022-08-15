#include <bits/stdc++.h>

using namespace std;
int cnt, b[1000010], a[1000010];
int n, m, ans = INT_MAX;
int ansl, ansr;
inline void I(int x)
{
    if (b[x] == 0)
        cnt++;
    b[x]++;
}
inline void D(int x)
{
    if (b[x] == 1)
        cnt--;
    b[x]--;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ans = n;
    for (int r = 1, l = 1; r <= n; r++)
    {
        I(a[r]);
        while (true)
        {
            D(a[l]);
            if (cnt == m)
                l++;
            else
            {
                I(a[l]);
                break;
            }
        }
        if (cnt == m && r - l + 1 < ans)
            ans = r - l + 1, ansl = l, ansr = r;
    }
    if (ansl != 0)
        cout << ansl << " " << ansr << endl;
    else
        cout << 1 << " " << n << endl;
    return 0;
}