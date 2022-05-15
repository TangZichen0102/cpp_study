#include <bits/stdc++.h>

using namespace std;

string solve(string a)
{
    int f = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');
    int e = (a[3] - '0') + (a[4] - '0') + (a[5] - '0');
    return f == e ? "YES" : "NO";
}

int main()
{
    // freopen("A.in", "r", stdin);
    
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
