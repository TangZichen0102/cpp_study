#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
const int N = 3e6 + 10;
int a[N], s[N];
vector<int> alls;
vector<PII> add, query;

int find(int x)
{
    int l = 0, r = alls.size() - 1;
    while (l < r)
    {
        int mid = ((l + r) >> 1);
        if (alls[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    return r + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("q.in", "r", stdin);
#endif
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        add.push_back({x, y});
        alls.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        alls.push_back(l);
        alls.push_back(r);
    }

    sort(alls.begin(), alls.end());

    alls.erase(unique(alls.begin(), alls.end()), alls.end());

    for (auto i : alls)
    {
        cout << i << " ";
    }
    puts("");

    for (auto i : add)
    {
        auto x = find(i.first);
        a[x] = i.second;
        printf("[%d]=%d ", x, a[x]);
    }

    for (int i = 1; i <= alls.size(); i++)
    {
        s[i] = s[i - 1] + a[i];
    }

    for (auto i : query)
    {
        int l = find(i.first), r = find(i.second);

        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}