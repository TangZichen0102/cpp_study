#include<bits/stdc++.h>

using namespace std;
string s;
int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(i != 0 && s[i - 1] >= '0' && s[i - 1] <= '9' && s[i] >= 'A' && s[i] <= 'Z') cout << endl << s[i];
        else if(s[i] == '+') cout << " tighten ";
        else if(s[i] == '-') cout << " loosen ";
        else cout << s[i];
    }
    return 0;
}