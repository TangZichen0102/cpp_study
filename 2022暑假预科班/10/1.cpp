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
    for(int i = 0; i < n; i++) {
        int k, t;
        cin >> k >> t;
        string s = _Itoa(t, k);
        int flag = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '1' && s[i] != ((k - 1) + '0') && s[i] != '0') {
                flag = 1;
                cout << "No" << endl;
                break;
            }
        }
        if(flag == 0) cout << "Yes" << endl; 
    }
    return 0;
}