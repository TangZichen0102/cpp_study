#include <bits/stdc++.h>

using namespace std;
bool is_leap_year(int n) {
    if(n % 400 == 0 || (n % 4 == 0 & n % 100 != 0)) return true;
    else return false;
}
int main() {
    int n;
    cin >> n;
    cout << (is_leap_year(n) ? "Yes" : "No");
    return 0;
}