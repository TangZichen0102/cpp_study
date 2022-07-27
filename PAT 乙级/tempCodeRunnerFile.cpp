#include <bits/stdc++.h>

using namespace std;
char c1, c2;
int d1, d2, d3;
int main() {
    scanf("%c%d.%dE%c%d", &c1, &d1, &d2, &c2, &d3);
    string s1 = to_string(d1);
    string s2 = to_string(d2);
    string s = s1 + s2;
    // cout << d3;
    if(c2 == '-') {
        for(int i = 0; i < d3 - 1; i++) s = '0' + s;
        s = "0." + s;
    }
    else {
        for(int i = 0; i < d3 - 1; i++) s += '0';
    }
    if(c1 == '-') s = '-' + s;
    cout << s;
    return 0;
}