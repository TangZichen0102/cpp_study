/*
题目来源
#2933、次大值
https://oj.shiyancang.cn/Problem/2933.html?index=0&cid=5137&type=4
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;

set<int> a;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        a.insert(t);
    }

    if (a.size() <= 1)
    {
        cout << -1;
        return 0;
    }

    

    vector<int> b;

    b.assign(a.begin(), a.end());
    int l = b.size();

    cout << max(b[l - 3], b[l - 1] % b[l - 2]);

    return 0;
}
/*
样例及推导

*/