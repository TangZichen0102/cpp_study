#include <bits/stdc++.h>

using namespace std;
int n;
unordered_map<string, int> m;
int sum;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;
     string _t;
    for (int i = 0; i < n; i++)
    {
        cin >> _t;
        m[_t]++;
    }
    int t = min(m["c"], m["at"]);
    sum += t;
    m["c"] -= t;
    t = min(m["ca"], m["t"]);
    sum += t;
    m["t"] -= t;
    t = min(min(m["c"], m["a"]), m["t"]);
    sum += t;
    sum += m["cat"];
    cout << sum;
    return 0;
}