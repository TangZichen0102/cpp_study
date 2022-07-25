#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for(int i = 0; i < s2.size(); i++) {
        if(s1.find(toupper(s2[i])) != string :: npos) continue;
        if(isupper(s2[i]) && s1.find('+') != string :: npos) continue;
        cout << s2[i]; 
    }
    return 0;
}