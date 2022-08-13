/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
typedef long long LL;
int n;
double exp(string s, int deep)
{
    // cout << "exp:" << s << endl;
    int sum = 0;
    if (s.empty())
    {
        return 0.5;
    }
    int cnt1 = 0, cnt2 = 0, l = 0, r = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (cnt1 == 0)
                l = i;
            cnt1++;
        }
        if (s[i] == ')')
        {
            cnt2++;
            if (cnt1 == cnt2)
                r = i;
        }

        if (cnt1 == cnt2)
        {
            cnt1 = cnt2 = 0;
            auto ans = exp(s.substr(l + 1, r - l - 1), deep + 1) * 2.0;
            sum += ans;
        }
    }
    return sum;
}

int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("5.in", "r", stdin);
#endif
    string s;
    cin >> s;

    cout << exp(s, 0);
    return 0;
}
/*
样例及推导

*/