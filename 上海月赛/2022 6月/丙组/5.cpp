#include <bits/stdc++.h>

using namespace std;
int n;
int a[500005];
long long sum;
int maxN;
int cnt;
main()
{
    freopen("5.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (maxN >= 0 && a[i] >= 0)
            maxN = max(maxN, a[i]);
        if (maxN <= 0 && a[i] < 0)
            maxN = min(maxN, a[i]);
        if ((maxN > 0 && a[i] < 0) || (maxN < 0 && a[i] > 0))
        {
            sum += abs(maxN);
            // cout << maxN << endl;
            maxN = a[i];
        }
    }

    sum += abs(maxN);

    cout << sum;
    return 0;
}

// for(int i = 1; i < n; i++) {
//     if(a[i] > 0 && a[i - 1] > 0) maxN = max(maxN, a[i]);
//     if(a[i] < 0 && a[i - 1] < 0) maxN = min(maxN, a[i]);
//     if((a[i] < 0 && a[i - 1] > 0) || (a[i] > 0 && a[i - 1] < 0)) {
//         if(maxN == 0) sum += abs(a[i - 1]);
//         else sum += abs(maxN);
//         maxN = a[i];
//         cnt++;
//     }
// }
// if(cnt == 0) sum = maxN;
// cout << sum;
