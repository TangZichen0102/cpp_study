/*
题目来源
802. 区间和
https://www.acwing.com/problem/content/804/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;

const int N = 3e6 + 10;
int n, m;

int a[N], s[N];
vector<int> alls;
vector<PII> add, query;

int find(int x)
{
    int l = 0,
        r = alls.size() - 1;
    while (l < r)
    {
        int mid = l + r >> 1;
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});
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

    // for (auto i : alls)
    // {
    //     cout << i << " ";
    // }
    // puts("");

    for (auto item : add)
    {
        auto x = find(item.first);
        a[x] += item.second;
        // printf("[%d]=%d ",x,a[x]);
    }
    // puts("");

    for (int i = 1; i <= alls.size(); i++)
    {
        s[i] = s[i - 1] + a[i];
    }

    for (auto item : query)
    {
        int l = find(item.first), r = find(item.second);
        cout << (s[r] - s[l - 1]) << endl;
    }

    return 0;
}
/*
样例及推导
输入样例：
3 3
1 2
3 6
7 5
1 3
4 6
7 8
输出样例：
8
0
5
*/