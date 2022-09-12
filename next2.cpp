#include <bits/stdc++.h>

using namespace std;
int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool is_leap_year(int n) {
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) return true;
    return false;
}
int days(int n) {
    int sum = 0;
    for(int i = 1600; i <= n - 1; i++) sum += (is_leap_year(i) ? 366 : 365);
    for(int i = 1; i <= 5; i++) sum += d[i];
    sum += 27;
    if(is_leap_year(n)) sum++;
    return sum;
}
int main() {
    int ans = 0;
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        int sum = (days(i) + 6) % 8;
        if(sum == 6 || sum == 7) ans++;
    }
    cout << ans;
    return 0;
}