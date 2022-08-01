#include <bits/stdc++.h>

using namespace std;
int c[10005];
int t[10005];
int cnt = 1;
int flag = 0;
int main()
{
    int a = 9, b = 7;
    // cin >> a >> b;
    cout << a << '/' << b << '=';
    cout << a / b << ".";
    a = a % b;
    while (a > 0)
    {
        if (t[a] == 0)
        {
            t[a] = cnt;
            a *= 10;
            c[cnt++] = a / b;
            a = a % b;
        }
        else
        {
            flag = t[a];
            break;
        }
    }
    for (int i = 1; i < cnt; i++)
    {
        if (i == flag)
            cout << '(';
        cout << c[i];
        if (flag > 0 && i == cnt - 1)
            cout << ')';
    }
    return 0;
}
