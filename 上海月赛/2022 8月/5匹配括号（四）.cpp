/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
#define _for(i, a, b) for (int i = (a); i < (b); ++i)
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define br puts("")

typedef long long LL;
const int mod = 1e9 + 7;
int n;
typedef pair<int, int> PII;
double exp(string s)
{
    cout << "exp:" << s << endl;
    int sum = 0;
    if (s == "")
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
            // printf("cnt1:%d cnt2:%d l:%d r:%d deep:%d\n", cnt1, cnt2, l, r, deep);
            cnt1 = cnt2 = 0;
            auto d = exp(s.substr(l + 1, r - l - 1)) * 2.0;
            sum += d;
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

    cout << exp(s);
    return 0;
}
/*
样例及推导

*/