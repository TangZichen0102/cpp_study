#include <bits/stdc++.h>
using namespace std;
int a[20], n, i = 1;
bool v[300];

int main()
{
    cin >> n;
    for (int i = 0; i < 6 * n; i++) {
        cin >> a[i];
        v[a[i]] = 1;
    }
    for (int i = 0; i < 6 * n; i++)
        for (int j = 0; j < 6 * n; j++)
            if ((i != j) && ((i / 6) != (j / 6))) v[a[i] + 10 * a[j]] = 1;
    while (v[i++]) cout << i - 2;
}