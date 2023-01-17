#include <bits/stdc++.h>
using namespace std;
int n, t, ans;
vector<int> a;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> t, a.push_back(t);
    sort(a.begin(), a.end());
    while (n--)
    {
        int w = a[0] + a[1];
        ans += w;
        a.erase(a.begin(), a.begin() + 2);
        auto idx = lower_bound(a.begin(), a.end(), w);
        a.insert(idx, w);
    }
    cout << ans;
    return 0;
}