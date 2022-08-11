#include <bits/stdc++.h>

using namespace std;
string cal(string str)
{
    // cout << "str:"<<str<<endl;
    int cnt1 = 0, cnt2 = 0;
    if (str.size() > 1 && (str[0] == 'T' || str[0] == 'F'))
    {
        for (int i = 1; i <= str.size(); i++)
        {
            if (str[i] == '?')
                cnt1++;
            else if (str[i] == ':')
                cnt2++;
            if (cnt1 == cnt2)
            {
                if (str[0] == 'T')
                    return cal(str.substr(2, i - 2));
                return cal(str.substr(i + 1));
            }
        }
    }
    return str;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        cout << cal(str) << endl;
    }
    return 0;
}