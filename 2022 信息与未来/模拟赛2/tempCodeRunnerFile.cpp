#include <bits/stdc++.h>

using namespace std;
string s;
int main() {
    getline(cin, s);
    for(int i = 0; i < s.size(); i++) {
        string a;
        for(int j = 0; i < s.size(); j++) {
            a += s[i + j];
            if(s.size() % a.size() != 0) break;
            int flag = 0;
            for(int k = 0; k < s.size() / a.size(); k++) {
                string b;
                for(int l = k * a.size(); l < (k + 1) * a.size(); l++) b += s[l];
                if(a != b) {
                    flag = 1;
                    break;
                }
            }
            if(flag) continue;
            else {
                cout << j + 1;
                return 0;
            }
        }
    }
    return 0;
}