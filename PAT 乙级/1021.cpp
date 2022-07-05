#include<bits/stdc++.h>

using namespace std;
string s;
int main() {
    cin >> s;
    for(int i = 0; i < 9; i++) {
        int cnt = 0;
        for(int j = 0; j < s.size(); j++) 
            if(s[j] == i + '0') cnt++;
        if(cnt != 0) cout << i << ':' << cnt << endl;
    }
    return 0;
}