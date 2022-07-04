#include <bits/stdc++.h>

using namespace std;
string s;
int sum = 0;
string f[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i++) sum += s[i] - '0';
    string s2 = to_string(sum);
    for(int i = 0; i < s2.size(); i++) {
        if(i == s2.size() - 1) cout << f[s2[i] - '0'];
        else cout << f[s2[i] - '0'] << " ";
    }
    return 0;
}