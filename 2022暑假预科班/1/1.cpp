
#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    if (s == "A")
        return true;
    if (s[0] == 'B' && s[s.length() - 1] == 'S')
    {
        string f = s.substr(1, s.length() - 2);
        if (check(f))
            return true;
    }
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'N')
        {
            string f = s.substr(0, i);
            string e = s.substr(i + 1, s.length() - i - 1);
            if (check(f) && check(e))
                return true;
        }
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    int n;
    cin >> n;
    string ss;
    for (int i = 0; i < n; ++i)
    {
        cin >> ss;
        cout << (check(ss) ? "YES" : "NO") << endl;
    }

    return 0;
}

void demo()
{
    //    string s = "BANANAS";
    //    cout << s.substr(1, s.length() - 2) << endl;
    //
    //    string s2 = "ANANA";
    //    int i = 1;
    //    cout << s2.substr(0, i) << endl;
    //    cout << s2.substr(i + 1, s2.length() - i - 1) << endl;
}
