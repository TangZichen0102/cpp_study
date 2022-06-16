#include <bits/stdc++.h>
using namespace std;

char s[1010];
long long ans, n;
int main()
{
    cin >> n >> s;
    for (int i = 0; s[i]; i++)
        ans = (ans * 10 + s[i] - '0') % n;
    cout << ans ? ans : n;
}