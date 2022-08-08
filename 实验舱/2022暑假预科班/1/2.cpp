#include <bits/stdc++.h>
using namespace std;
int n, m, maxn = -10000;
int a[100005], b[100005];
int main()
{
    cin >> m >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    if (n == 1)
    {
        if (b[0] == 0)
        {
            cout << m - a[0];
        }
        else{
            cout << a[0];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (m - b[i] > maxn)
                maxn = m - b[i];
        }
        cout << maxn - 1;
    }
    return 0;
}