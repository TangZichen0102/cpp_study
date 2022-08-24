#include <bits/stdc++.h>

using namespace std;
string _Itoa(int n, int m) {
    string _s;
    do{
        int t = n % m;
        if(t >= 0 && t <= 9) _s += t + '0';
        else _s += t - 10 + 'a';
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