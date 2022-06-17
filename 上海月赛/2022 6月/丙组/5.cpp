#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 5e5 + 10;
LL n, a[N], i = 1, ans = 0, last = 0;
bool f1(LL c, LL d) { 
    return c <= d; 
}
bool f2(LL c, LL d) { 
    return c >= d; 
}
bool f3(LL c, LL d) { 
    return c > 0 && d > 0; 
}
bool f4(LL c, LL d) { 
    return c < 0 && d < 0; 
}
int main()
{
    cin >> n;
    for (LL j = 1; j <= n; j++) cin >> a[j];
    while (1)
    {
        while (i <= n && a[i] == 0) i++;
        if (i > n) {
            cout << ans << endl;
            return 0;
        }
        if (a[i] > 0) {
            while (i <= n && f3(a[i], a[i + 1]) && f1(a[i], a[i + 1])) i++;
            ans += min(a[i], abs(a[i] - last));
            while (i <= n && f3(a[i], a[i + 1]) && f2(a[i], a[i + 1])) i++;
        }
        if (a[i] < 0) {
            while (i <= n && f4(a[i], a[i + 1]) && f2(a[i], a[i + 1])) i++;
            ans += min(abs(a[i]), abs(a[i] - last));
            while (i <= n && f4(a[i], a[i + 1]) && f1(a[i], a[i + 1])) i++;
        }
        last = a[i++];
    }
    return 0;
}