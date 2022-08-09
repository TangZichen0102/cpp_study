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
    int i, j;
    // cout << s << endl;
    for(i = 0; i < s.size(); i++) {
        int flag = 0;
        if(s[i] == '0')
            for(j = i; j < s.size(); j++)
                if(s[j] != '0') {
                    swap(s[j - 1], s[j]);
                    flag = 1;
                    break;
                }
        if(flag) break;
    }
    // cout << s << " " << s[j] << endl;
    for(int i = j; i < s.size(); i++) {
        int t = i;
        if(s[i] == '1')
            for(int k = i; k < s.size(); k++)
                if(s[k] == '0') {
                    s[i] = '0';
                    s[k] = '1';
                    i = k;
                }
        i = t;
    }
    int cnt = 1;
    int sum = 0;
    for(int i = s.size() - 1; i >= 0; i--) {
        int d = s[i] - '0';
        if(d) sum += cnt;
        cnt = cnt * 2;
    }
    cout << sum;
    return 0;
}