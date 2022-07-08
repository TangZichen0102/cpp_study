#include <bits/stdc++.h>

using namespace std;
int n, m, nm;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    cin >> n >> m >> nm;
    int sum = 0;
    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) d[2] = 29;
    for(int i = 1; i <= m - 1; i++) sum += d[i];
    cout << sum + nm;
    return 0;
}