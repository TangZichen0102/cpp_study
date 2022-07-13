#include <bits/stdc++.h>

using namespace std;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool is_leap_year(int n) {
    if(n % 400 == 0 || (n % 4 == 0 & n % 100 != 0)) return true;
    else return false;
}
void days_of_month(int n, int m) {
    if(is_leap_year(n)) d[2] = 29;
}
int pass_days(int n, int m, int D) {
    int sum = 0;
    days_of_month(n, m);
    for(int i = 1; i <= m - 1; i++) sum += d[i];
    return sum + D;
}
int main() {
    int n, m, d;
    cin >> n >> m >> d;
    cout << pass_days(n, m, d);
    return 0;
}