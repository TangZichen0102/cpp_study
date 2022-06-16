#include <bits/stdc++.h>

using namespace std;
string s, s1;
int main() {
    getline(cin, s);
    getline(cin, s1);
    if(s.size() % s1.size() != 0) {
        cout << "No";
        return 0;
    }
    for(int i = 0; i < s.size(); i++)
        if(s[i] != s1[s1.size() % i]) {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}