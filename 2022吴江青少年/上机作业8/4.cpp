#include <bits/stdc++.h>

using namespace std;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool is_leap_year(int n) {
    if(n % 400 == 0 || (n % 4 == 0 & n % 100 != 0)) return true;
    else return false;
}
int days_of_month(int n, int m) {
    if(is_leap_year(n)) d[2] = 29;
    return d[m];
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << days_of_month(n, m);
    return 0;
}