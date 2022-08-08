#include <bits/stdc++.h>

using namespace std;
int t, n;
int a[2000005];
string f;

void printa()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    puts("");
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif

    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> f;
        for (int i = 0; i < f.size(); i++)
        {
            if (f[i] == '1')
                // if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        }

        // printa();
        int flag = 1;

        for (int i = 0; i < n - 1; i++)
        {
            // cout << a[i];
            if (a[i] >= a[i + 1])
            {
                flag = 0;
                break;
            }
        }
        // cout << flag << " ";
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}