/*
题目来源
实验舱
#2626、可并栈
https://oj.shiyancang.cn/Contest/Problem/2626.html?index=1&cid=5146&type=4
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;
const int MAXN = 2e5 + 10;

struct node
{
    int t, x;
    operator<(const node &b) const
    {
        return t < b.t;
    }
};

stack<node> a, b;
vector<node> c;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            string ss;
            int x;
            cin >> ss >> x;
            if (ss == "A")
            {
                a.push({i, x});
            }
            else
            {
                b.push({i, x});
            }
        }
        else if (s == "pop")
        {
            string ss;
            cin >> ss;
            if (ss == "A")
            {
                printf("%d\n", a.top().x);
                a.pop();
            }
            else
            {
                printf("%d\n", b.top().x);
                b.pop();
            }
        }
        else if (s == "merge")
        {
            string s1, s2;
            cin >> s1 >> s2;
            while (a.size())
            {
                c.push_back(a.top());
                a.pop();
            }
            while (b.size())
            {
                c.push_back(b.top());
                b.pop();
            }

            sort(c.begin(), c.end());

            if (s1 == "A")
                for (int j = 0; j < c.size(); j++)
                    a.push({j, c[j].x});
            else if (s1 == "B")
                for (int j = 0; j < c.size(); j++)
                    b.push({j, c[j].x});
            c.clear();
        }
    }
    return 0;
}
/*
样例及推导

*/