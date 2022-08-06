/*
浴谷


实验仓
#1494、买书
https://oj.shiyancang.cn/Problem/1494.html
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL n, t, ans;
vector<LL> a;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < a.size(); i++)
    {
        if (i % 3 != 2)
        {
            ans += a[i];
        }
    }

    cout << ans;

    return 0;
}

/*
7
10 5 4 6 1 3 5

26

10 6 5 5 4 3 1

第一种，三个一组顺序分
10 6 5
5 4 3
1
26

10 5 4
6 5 3
1
27


*/