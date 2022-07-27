#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    char reschar;
    int maxv = 0;
    unordered_map<char, int> mp;
    for(auto &c : str) {
        c = tolower(c);
        if(isalpha(c)) {
            mp[c]++;
            if(maxv < mp[c]) {
                maxv = mp[c];
                reschar = c;
            }
            else if(maxv == mp[c] && reschar > c) {
                reschar = c;
            }
        }
    }
    cout << reschar << " " << maxv;
    return 0;
}