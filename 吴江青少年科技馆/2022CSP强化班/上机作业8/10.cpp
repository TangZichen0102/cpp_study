#include <bits/stdc++.h>

using namespace std;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool is_leap_year(int y) {
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) return true;
    else return false;
}
int days_of_month(int y, int m) {
    if(is_leap_year(y)) d[2] = 29;
    return d[m];
}
int pass_days(int y, int m) {
    int sum = 0;
    if(is_leap_year(y)) d[2] = 29;
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
int weekday_of_the_frist_day(int y, int m) {
    int sum1 = pass_year(y);
    int sum2 = pass_days(y, m);
    int sum = (sum1 + sum2) % 7;
    return (sum + 3) % 7;
}
int main() {
    int y, frist, days;
    cin >> y;
    for(int i = 1; i <= 12; i++) {
        cout << "----------------------------" << endl;
        cout << y << '/' << i << endl;
        cout << "----------------------------" << endl;
        cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
        frist = weekday_of_the_frist_day(y, i);
        days = days_of_month(y, i);
        for(int i = 0; i < frist; i++) cout << "    ";
        for(int i = 1; i <= days; i++) {
            cout << left << setw(4) << i;
            if((i + frist)% 7 == 0) cout << endl;
        }
        cout << endl;
    }
    return 0;
}