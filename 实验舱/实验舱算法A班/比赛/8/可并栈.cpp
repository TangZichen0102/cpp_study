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
    bool operator<(const node &b) const
    {
        return t < b.t;
    }
};

stack<node> a, b;

priority_queue<node> c;

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
    if (ss == "A" && a.size())
    {
        printf("%d\n", a.top().x);
        a.pop();
    }
    else if (ss == "B" && b.size())
    {
        printf("%d\n", b.top().x);
        b.pop();
    }
    else
    {
        printf("%d\n", c.top().x);
        c.pop();
    }
}
void merge(int i)
{
    string s1, s2;
    cin >> s1 >> s2;
    while (a.size())
    {
        c.push(a.top());
        a.pop();
    }
    while (b.size())
    {
        c.push(b.top());
        b.pop();
    }
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