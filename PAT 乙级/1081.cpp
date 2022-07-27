#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    getchar();
    for(int i = 0; i < n; i++) {
        getline(cin, s);
        if(s.size() >= 6) {
            int d = 0, ha = 0, hn = 0;
            for(int j = 0; j < s.size(); j++) {
                if(s[j] != '.' && !isalnum(s[j])) d = 1;
                else if(isalpha(s[j])) ha = 1;
                else if(isdigit(s[j])) hn = 1;
            }
            if(d == 1) cout << "Your password is tai luan le." << endl;
            else if(ha == 0) cout << "Your password needs zi mu." << endl;
            else if(hn == 0) cout << "Your password needs shu zi." << endl;
            else cout << "Your password is wan mei." << endl;
        }
        else cout << "Your password is tai duan le." << endl;
    }
    return 0;
}