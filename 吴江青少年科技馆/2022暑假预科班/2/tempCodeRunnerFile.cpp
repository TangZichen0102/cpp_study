#include <bits/stdc++.h>

using namespace std;
int n;
int a[100005], b[100005];

void check(int i)
{
    cout << a[i] << ' ' << b[i] << endl;
    if (a[i] % 3 == 0 && a[i] == b[i])
    {
        cout << "YES" << endl;
        return;
    }
    if (a[i] * 2 == b[i] || b[i] * 2 == a[i])
    {
        cout << "YES" << endl;
        return;
    }
    if ((a[i] % 3 == 2 && b[i] % 3 == 1) || (a[i] % 3 == 1 && b[i] % 3 == 2))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

bool check2(int x, int y)
{
    if (x == 0 && y == 0)
        return true;
    if (x < 0 || y < 0)
        return false;
    return check2(x - 1, y - 2) || check2(x - 2, y - 1);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif


    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    /*
    for(int i = 0; i < n; i++) {
        cout << a[i] << " " << b[i] << endl;
    }
    */

    for (int i = 0; i < n; i++)
    {
        cout << (check2(a[i], b[i]) ? "YES" : "NO") << endl;
        
    }
    return 0;
}