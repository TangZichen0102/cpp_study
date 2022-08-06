#include <bits/stdc++.h>

using namespace std;
int n;
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
    cin >> n;
    string s = _Itoa(n, 2);

    return 0;
}