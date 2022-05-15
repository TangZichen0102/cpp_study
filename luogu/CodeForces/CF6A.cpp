#include <bits/stdc++.h>
using namespace std;
int f[5];
int main()
{
    for (int i = 1; i <= 4; i++)
        cin >> f[i];
    sort(f + 1, f + 5);
    if (f[1] + f[2] > f[3] || f[2] + f[3] > f[4])
        cout << "TRIANGLE";
    else if (f[1] + f[2] == f[3] || f[2] + f[3] == f[4])
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
    return 0;
}