/*
题目来源
独立数
https://iai.sh.cn/problem/683
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
typedef long long LL;
int n;
<<<<<<< HEAD
typedef pair<int, int> PII;
double dfs(string s)
{
    // cout << "exp:" << s << endl;
    int sum = 0;
    if (s == "") return 0.5;
=======

const int mod = 1e9 + 7;

double exp(string s, int deep)
{
    cout << "exp:" << s << endl;
    LL sum = 0;
    if (s.empty())
    {
        return 0.5;
    }
>>>>>>> 519b39f0077ffdc5b94d8bb5c37c1992ca2f264b
    int cnt1 = 0, cnt2 = 0, l = 0, r = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            if (cnt1 == 0) l = i;
            cnt1++;
        }
        if (s[i] == ')') {
            cnt2++;
            if (cnt1 == cnt2) r = i;
        }
<<<<<<< HEAD
        if (cnt1 == cnt2) {
            cnt1 = cnt2 = 0;
            auto d = dfs(s.substr(l + 1, r - l - 1)) * 2.0;
            sum += d;
=======

        if (cnt1 == cnt2)
        {
            cnt1 = cnt2 = 0;
            auto ans = exp(s.substr(l + 1, r - l - 1), deep + 1) * 2.0;
            sum += ans;
>>>>>>> 519b39f0077ffdc5b94d8bb5c37c1992ca2f264b
        }
    }
    return sum % mod;
}

int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("5.in", "r", stdin);
#endif
    string s;
    cin >> s;
<<<<<<< HEAD
    cout << dfs(s);
=======

    printf("%d",exp(s, 0));
>>>>>>> 519b39f0077ffdc5b94d8bb5c37c1992ca2f264b
    return 0;
}
/*
样例及推导

*/