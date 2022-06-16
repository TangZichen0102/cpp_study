#include <bits/stdc++.h>

using namespace std;
string s, s2;
int n, sum;
int main() {
    cin >> s >> n;
    for(int i = 0; i < n; i++) {
        cin >>s2;
        int flag = 0;
        if(s2.size() == s.size()) {
            for(int j = 0; j < s2.size(); j++) {
                if(s[j] == '?') continue;
                if(s2[j] != s[j]) {
                    flag = 1;
                    break;
                }
            }
        }
        else continue;
        if(flag) continue;
        else sum++;
    }
    cout << sum;
    return 0;
}