#include <bits/stdc++.h>

using namespace std;
string s;
int t;
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> s >> t;
    while(t > 0) {
        int j;
        for(j = 0; j < s.size() - 1; j++)
            if(s[j] > s[j + 1]) {
                s.erase(j, 1);
                t--;
                break;
            }
        if(j == s.size() - 1) break; 
    }
    while(t--) s.pop_back();
    while(s.size() > 1 && s[0] == '0') s.erase(s.begin());
    cout << s;
    return 0;
}

/*
125512346 5

*/