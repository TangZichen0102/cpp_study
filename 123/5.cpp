#include <bits/stdc++.h>

using namespace std;
long long a, n, m, x;
long long b[100005];
int main()
{
    cin >> a >> n >> m >> x;
    b[1] = a;
    for (int i = 0; i < m; i++)
    {
        long long sum = a;
        long long cnt = 0;
        b[2] = i;
        for (int j = 3; j <= n - 1; j++)
        {
            b[j] = b[j - 1] + b[j - 2];
            sum += b[j - 2];
            // cout << b[j] << " " << c[j] << " " << sum << endl;
            if(j == x) cnt = sum; 
        }
        if(sum == m) {
            cout << cnt;
            return 0;
        }
    }
    cout << "No answer.";
    return 0;
}
