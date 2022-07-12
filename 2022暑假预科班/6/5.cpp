#include <bits/stdc++.h>

using namespace std;
int n;
string a, b;
bool fun(string s1, string s2) {
    string s1_a = s1.substr(0, s1.size() / 2), s1_b = substr(s1.size() / 2, s1.size() / 2);
    string s2_a = s2.substr(0, s2.size() / 2), s2_b = substr(s2.size() / 2, s2.size());
    if(s1.size() % 2 == 0 && s2.size() % 2 == 0 && s1.size() == s2.size()) {
        if(fun(s1_a, s1_b) && fun(s2_a, s2_b)) return true;
    }
    else return false;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(fun(a, b)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}