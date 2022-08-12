#include <bits/stdc++.h>

using namespace std;
int sum;
string s;
int l, r;
void fun(string s2, int num) {
    if()
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("5.in", "r", stdin);
#endif
    cin >> s;
    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] == '(' && s[i + 1] == ')') {
            // cout << i << " " << i + 1;
            l = i, r = i + 1;
            string s2 = "()";
            fun(s2, 0);
            cout << sum;
            return 0;
        }
    }
    return 0;
}