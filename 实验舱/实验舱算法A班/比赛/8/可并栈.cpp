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
};

bool cmp(node x,node y)
{
    return x.t<y.t;
}

stack<node> a, b;
vector<node> c;

void push(int i)
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

void pop(int i)
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
void merge(int i)
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

    sort(c.begin(), c.end(),cmp);

    if (s1 == "A")
        for (auto j : c)
            a.push(j);
    else
        for (auto j : c)
            b.push(j);
    c.clear();
}
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
            push(i);
        else if (s == "pop")
            pop(i);
        else if (s == "merge")
            merge(i);
    }
    return 0;
}
/*
样例及推导

*/