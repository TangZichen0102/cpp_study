#include <bits/stdc++.h>

using namespace std;
int a[101];
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s2.size(); i++) {
        if(s2[i] >= 'a' && s2[i] <= 'z') s2[i] -= 32;
        a[s2[i]] = 1;
    }
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] >= 'a' && s1[i] <= 'z') s1[i] -= 32;
        if(a[s1[i]] != 1) {
            cout << s1[i];
            a[s1[i]] = 1;
        }
    }
    return 0;
}