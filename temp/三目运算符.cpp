/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;

string exp(string s)
{
    // cout << "exp:" << s << endl;
    if (s.size() > 1 && (s[0] == 'T' || s[0] == 'F'))
    {
        int cnt = 0, idx = 2;
        for (idx = 2; idx < s.size(); idx++)
        {
            if (s[idx] == '?')
                cnt--;
            if (s[idx] == ':')
                cnt++;
            if (cnt == 1)
                break;
        }
        // cout << "idx:" << idx << endl;
        if (s[0] == 'T')
        {
            string ss = s.substr(2, idx - 2);
            // cout << ss << endl;
            return exp(ss);
        }
        if (s[0] == 'F')
        {
            string ss = s.substr(idx + 1, s.size() - 1);
            // cout << ss << endl;
            return exp(ss);
        }
    }
    return s;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << exp(s) << endl;
    }
    return 0;
}
/*
样例及推导

*/