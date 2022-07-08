#include <bits/stdc++.h>

using namespace std;
int a, b;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    cin >> a >> b;
    if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) d[2] = 29;
    cout << d[b];
    return 0;
}