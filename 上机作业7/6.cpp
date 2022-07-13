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
void two_years(int n1, int m1, int d1, int n2, int m2, int d2) {
    int sum1 = pass_days(n1, m1, d1);
    int sum2 = pass_days(n2, m2, d2);
    int sum = 0;
    for(int i = min(n1, n2); i < max(n1, n2); i++) sum += (is_leap_year(i) ? 366 : 365);
    cout << sum + abs(sum1 - sum2);
}
int main() {
    int n1, m1, d1;
    int n2, m2, d2;
    cin >> n1 >> m1 >> d1 >> n2 >> m2 >> d2;
    two_years(n1, m1, d1, n2, m2, d2);
    return 0;
}