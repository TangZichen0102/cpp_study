#include <bits/stdc++.h>

using namespace std;
long long a, n, m, x;
long long b[100005], c[100005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> n >> m >> x;
    b[1] = a, c[1] = 0;
    for (int i = 0; i <= m; i++)
    {
        long long sum = a;
        long long cnt = 0;
        b[2] = i, c[2] = i;
        for (int j = 3; j <= n - 1; j++)
        {
            b[j] = b[j - 1] + b[j - 2];
            // c[j] = b[j - 1];
            sum += b[j - 2];
            // sum -= c[j];
            if (j == x)
                cnt = sum;
        }
        if (sum == m)
        {
            cout << cnt;
            // cout << a << n << m << x;
            return 0;
        }
    }
    cout << "No answer.";
    return 0;
}