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
int b[105][105];
int n;
int a[105];
int cnt;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("5.in", "r", stdin);
    #endif
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        string s = _Itoa(a[i], 2);
        for (; s.size() < 8; s = "0" + s);
        for(int j = 0; j < 8; j++) b[j][i] = s[j] - '0';
    }
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < n; j++) 
            if(b[i][j] == 0) cout << '*';
            else cout << '.';
        cout << endl;
    }
    return 0;
}