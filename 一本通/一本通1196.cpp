#include <bits/stdc++.h>

using namespace std;
int a[25];
int main()
{
    int n;
    cin >> n;
    a[1] = 3;
    a[2] = 7;
    for (int i = 3; i <= n; i++)
        a[i] = 2 * a[i - 1] + a[i - 2];
    cout << a[n];
    return 0;
}