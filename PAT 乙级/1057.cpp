#include <bits/stdc++.h>

using namespace std;
string _Itoa(long long n, int m) {
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
void fun(string s) {
    int cnt = 0;
    string s2;
    for(int i = 0; i < s.size(); i++)
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            if(s[i] >= 'A' && s[i] <= 'Z') s2[cnt] = s[i] + ' ';
            else s2[cnt] = s[i];
            cnt++;
        }
    long long sum = 0;
    for(int i = 0; i < cnt; i++) sum += (int) (s2[i]) - 96;
    string Itoa = _Itoa(sum, 2);
    int sum0 = 0, sum1 = 0;
    for(int i = 0; i < Itoa.size(); i++) {
        if(Itoa[i] == '0') sum0++;
        else sum1++;
    }
    if(cnt == 0) cout << 0 << " " << 0;
    else cout << sum0 << " " << sum1;
}
int main() {
    string s1;
    getline(cin, s1);
    fun(s1);
    return 0;
}