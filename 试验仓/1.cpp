#include <bits/stdc++.h>
using namespace std;

int main()
{

    int l, r;
    cin >> l >> r;

    int ans = 0;
    for (int i = l; i <= r; ++i)
    {
        int cnt = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 4)
            ans++;
    }
    printf("The number of RSA numbers between %d and %d is %d", l, r, ans);
}
