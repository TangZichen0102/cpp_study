#include <bits/stdc++.h>

using namespace std;
set<int> s;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int _t;
        cin >> _t;
        s.insert(_t);
    }
    for (int i = 0; i < m; i++)
    {
        int _t;
        cin >> _t;
        s.insert(_t);
    }
    for (auto i : s)
        cout << i << " ";
    return 0;
}
