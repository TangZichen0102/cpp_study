#include <bits/stdc++.h>

using namespace std;
int m[4];
int a;
int main() {
    while(cin >> a) m[a]++;
    int sum = 0;
    sum += m[4];
    sum += min(m[3], m[1]);
    m[3] -= min(m[3], m[1]);
    m[1] -= min(m[3], m[1]);
    sum += m[2] / 2;
    m[2] = m[2] % 2;
    cout << sum + m[1] + m[2] + m[3] + m[4];
    return 0;
}