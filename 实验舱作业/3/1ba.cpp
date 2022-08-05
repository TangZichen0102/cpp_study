#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
LL n, m, sum;

LL qmi(LL a, LL b, LL p)
{
    LL res = 1LL % p;
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

set<LL> v;

void dfs(int l, int x, int y, int z)
{
    //    if (x + y + z > 13)
    //        return;
    //    LL _a = qmi(2, x, LLONG_MAX) * qmi(3, y, LLONG_MAX) * qmi(5, z, LLONG_MAX);
    //    if (_a > 1) {
    //        printf("%d %d %d\n", qmi(2, x, LLONG_MAX), qmi(3, y, LLONG_MAX), qmi(5, z, LLONG_MAX));
    //        printf("%d %d %d %d\n", x, y, z, _a);
    //        v.insert(_a);
    //    }
    //    dfs(l + 1, x, y + 1, z);
    //    dfs(l + 1, x, y, z + 1);
    //    dfs(l + 1, x + 1, y, z);
    for (z = 0; z < 32; z++)
    {
        for (y = 0; y < 50; y++)
        {
            for (x = 0; x < 64; x++)
            {
                if (x + y + z < 200)
                {
                    __int128 _a = (__int128)qmi(2, x, LLONG_MAX) * (__int128)qmi(3, y, LLONG_MAX) *
                                  (__int128)qmi(5, z, LLONG_MAX);
                    if (_a < LLONG_MAX && _a > 1)
                    {
                        //                        printf("%d %d %d\n", qmi(2, x, LLONG_MAX), qmi(3, y, LLONG_MAX), qmi(5, z, LLONG_MAX));
                        //                        printf("%d %d %d %lld\n", x, y, z, _a);
                        v.insert(_a);
                    }
                }
            }
        }
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    // init235(n);
    // cout << ans[n - 1];
    dfs(0, 0, 0, 0);
    //    for (auto a: v) {
    //        cout << a << endl;
    //    }
    //    sort(v.begin(), v.end());

    vector<LL> v2;
    v2.assign(v.begin(), v.end());
    //    for (int i = 0; i < 100; i++) {
    //        cout << v2[i] << endl;
    //    }
    //    cout << v2.size();
    cout << v2[n - 1] << endl;
    //    cout << LLONG_MAX;

    return 0;
}