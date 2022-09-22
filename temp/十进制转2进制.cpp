#include <bits/stdc++.h>

using namespace std;
string dp = "0123456789abcdefghijklmnopqrstuvwxyz";
string _Itoa(int n, int m) {
    string _s;
    do{
        int t = n % m;
        _s += dp[t];
        n /= m;
    }while(n != 0);
    reverse(_s.begin(), _s.end());
    return _s;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << _Itoa(n, m);
    return 0;
}