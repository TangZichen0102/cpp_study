#include <bits/stdc++.h>

using namespace std;
long long a, n, m, x;
long long b[100005], c[100005];
int main()
{
    cin >> a >> n >> m >> x;
    b[0] = a, c[0] = 0;
    for (int i = 0;; i++)
    {
        long long sum = a;
        long long cnt = 0;
        b[1] = i, c[1] = i;
        for (int j = 1; j < n; j++)
        {
            
            sum += b[j];
            sum -= c[j];
            b[j + 1] = b[j] + b[j - 1];
            c[j + 1] = b[j];
            c[j + 1] = b[j];
            // cout << b[j] << " " << c[j] << " " << sum << endl;
            if(j == x) cnt = sum; 
        }
        if(sum == m) {
            cout << cnt;
            return 0;
        }
        if(sum > m) {
            cout << "No answer.";
            return 0;
        }
    }
    return 0;
}
