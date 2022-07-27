#include <bits/stdc++.h>
using namespace std;
string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"#", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int len;
void f1(int i) {
    if(i / 13) cout << b[i / 13];
    if((i / 13) && (i % 13)) cout << " ";
    if(i % 13 || i == 0) cout << a[i % 13];
}
void f2(string s) {
    int t1 = 0, t2 = 0;
    string s1 = s.substr(0, 3), s2;
    if(len > 4) s2 = s.substr(4, 3);
    for(int i = 1; i <= 12; i++) {
        if(s1 == a[i] || s2 == a[i]) t2 = i;
        if(s1 == b[i]) t1 = i;
    }
    cout << t1 * 13 + t2;
}
int main() {
    int n;
    cin >> n;
    getchar();
    for(int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        len = s.size();
        if(s[0] >= '0' && s[0] <= '9') f1(stoi(s));
        else f2(s);
        cout << endl;
    }
    return 0;
}