#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;

LL qmi(LL a, LL b, LL p)
{
    LL res = 1 % p;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = (LL)a * a % p;
        b >>= 1;
    }
    return res % p;
}

vector<LL> ans;
void init235(LL n)
{
    LL num = 2, cnt = 0;
    while (1)
    {
        LL t = num;
        while (t % 2 == 0 || t % 3 == 0 || t % 5 == 0)
        {
            if (t % 5 == 0)
                t /= 5;
            if (t % 3 == 0)
                t /= 3;
            if (t % 2 == 0)
                t /= 2;
        }
        if (t == 1)
        {
            // cout << "push"<<num<<endl;
            ans.push_back(num);
            cnt++;
        }
        num++;
        if (cnt == n)
            break;
    }
}

set<int> v;

void dfs(int l, int x, int y, int z)
{
    if (x + y + z > 60 || y > x || z > y)
        return;
    LL _a = qmi(2, x, LLONG_MAX) * qmi(3, y, LLONG_MAX) * qmi(5, z, LLONG_MAX);
    if (_a > 1)
        v.insert(_a);
    dfs(l + 1, x, y + 1, z);
    dfs(l + 1, x, y, z + 1);
    dfs(l + 1, x + 1, y, z);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    // cin >> n;
    // init235(n);
    // cout << ans[n - 1];
    dfs(0, 0, 0, 0);
    for (auto a : v)
    {
        cout << a << endl;
    }

    return 0;
}