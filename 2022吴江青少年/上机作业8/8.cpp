#include <bits/stdc++.h>

using namespace std;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool is_leap_year(int y) {
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) return true;
    else return false;
}
void days_of_month(int y, int m) {
    if(is_leap_year(y)) d[2] = 29;
}
int pass_days(int y, int m) {
    int sum = 0;
    days_of_month(y, m);
    for(int i = 1; i <= m - 1; i++) sum += d[i];
    return sum;
}
int pass_year(int y) {
    int sum = 0;
    for(int i = 1800; i <= y - 1; i++)
        if(is_leap_year(i)) sum += 366;
        else sum += 365;
    return sum;
}
void weekday_of_the_frist_day(int y, int m) {
    int sum1 = pass_year(y);
    int sum2 = pass_days(y, m);
    int sum = (sum1 + sum2) % 7;
    cout << (sum + 3) % 7;
}
int main() {
    int y, m;
    cin >> y >> m;
    weekday_of_the_frist_day(y, m);
    return 0;
}