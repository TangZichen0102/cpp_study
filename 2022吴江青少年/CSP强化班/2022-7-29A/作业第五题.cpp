#include <bits/stdc++.h>

using namespace std;
int a;
string s;
int main() {
    scanf("%d.", &a);
    cin >> s;
    string _t;
    if(s[0] == '(') {
        int len = s.size() - 2;
        for(int i = 0; i < len; i++) _t += '9';
    }
    if(s[0] != '(') {
        int cnt = 0;
        while(true) {
            if(s[cnt] != '(') cnt++;
            else break;
        }
        // cout << s[cnt];
        int cnt2 = cnt;
        while(true) {
            if(s[cnt2] != ')') cnt2++;
            else break;
        }
        for(int i = 0; i < cnt2 - cnt - 1; i++) _t += '9'; 
        for(int i = 0; i < cnt; i++) _t += "0";
        // cout << s[cnt2];
        // string 
    }
    // cout << _t;
    string _t2;
    if(a != 0) _t2 += to_string(a);
    for(int i = 0; i < s.size(); i++)
        if(s[i] >= '0' && s[i] <= '9') _t2 += s[i];
    // cout << _t2;
    string _t3;
    if(a != 0) _t3 += to_string(a);
    for(int i = 0; i < s.size(); i++)
        if(s[i] >= '0' && s[i] <= '9') _t3 += s[i];
        else break;
    int sum1 = atoi(_t.c_str());
    int sum2 = atoi(_t2.c_str());
    int sum3 = atoi(_t3.c_str());
    int sum4 = sum2 - sum3;
    // cout << sum1 << " " << sum4;
    // cout <<  __gcd(sum4, sum1);
    int _T = sum1;
    sum1 = sum1 / __gcd(sum4, sum1);
    sum4 = sum4 / (_T / sum1);
    cout << sum4 << '/' << sum1;
    return 0;
}