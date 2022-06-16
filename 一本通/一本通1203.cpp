#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int len = s.length();
        int a[305];
        for (int i = 0; i < len; i++)
            if (s[i] == '(') a[i] = 1;
            else if (s[i] == ')') a[i] = 2;
            else a[i] = 0;
        cout << s << endl;
        stack<int> sta;
        for (int i = 0; i < len; i++)
            if (a[i] == 1) {
                sta.push(i);
                s[i] = '$';
            }
            else if (a[i] == 2)
                if (sta.empty()) {
                    sta.push(i);
                    s[i] = '?';
                }
                else {
                    int b = sta.top();
                    if (a[b] == 1) {
                        sta.pop();
                        s[b] = ' ';
                        s[i] = ' ';
                    }
                    else {
                        sta.push(i);
                        s[i] = '?';
                    }
                }
            else s[i] = ' ';
        cout << s << endl;
    }
    return 0;
}
