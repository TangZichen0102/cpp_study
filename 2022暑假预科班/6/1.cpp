#include <bits/stdc++.h>

using namespace std;

int const MAXN = 1e5 + 5;

struct POINT
{
    int address, data, next;
} nodes[MAXN];

deque<int> l1, l2;

int main()
{

    //#ifndef ONLINE_JUDGE
    //    freopen("1.in", "r", stdin);
    //#endif

    int h1, h2, n;
    cin >> h1 >> h2 >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        nodes[a] = {a, b, c};
        //        cout << a << b << c;
    }

    for (int i = h1; i != -1; i = nodes[i].next)
    {
        l1.push_back(i);
    }
    for (int i = h2; i != -1; i = nodes[i].next)
    {
        l2.push_back(i);
    }

    if (l1.size() < l2.size()) //让L1成为长链
        swap(l1, l2);

    vector<int> ans;

    for (int i = 1; i <= n; ++i)
    {
        if (i % 3 == 0)
        {
            if (l2.size() > 0)
                ans.push_back(l2.back()), l2.pop_back();
            else
                ans.push_back(l1.front()), l1.pop_front();
        }
        else
        {
            ans.push_back(l1.front()), l1.pop_front();
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%05d %d %05d\n", ans[i], nodes[ans[i]].data, ans[i + 1]);
    }
    printf("%05d %d -1\n", ans[ans.size() - 1], nodes[ans[ans.size() - 1]].data);
    return 0;
}
