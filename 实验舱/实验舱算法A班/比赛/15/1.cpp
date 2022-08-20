#include <bits/stdc++.h>

using namespace std;
long long n, m;
long long ans = 0, a[2000005], helper[2000005], tmp[2000005];
void mergesort(long long l, long long r)
{
    if (l >= r)
        return;
    long long mid = l + r >> 1;
    mergesort(l, mid), mergesort(mid + 1, r);
    long long x = l, y = mid + 1, index = 0;
    while (x <= mid || y <= r)
    {
        if ((x <= mid && a[x] < a[y]) || y > r)
            helper[index++] = a[x++];
        else
        {
            ans = ans + mid - x + 1;
            helper[index++] = a[y++];
        }
    }
    for (long long i = l; i <= r; i++)
        a[i] = helper[i - l];
}
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    mergesort(1, n);
    cout << ans;
    return 0;
}
