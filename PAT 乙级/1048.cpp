#include <bits/stdc++.h>

using namespace std;
string s[15] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "J", "Q", "K"};
int main() {
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while(a.size() < b.size()) a += '0';
    while(b.size() < a.size()) b += '0';
    string ans;
    for(int i = 0; i < b.size(); i++) {
        if(i % 2) {
            int t = (b[i] -  '0') - (a[i] - '0');
            if(t < 0) t += 10;
            ans += s[t];
        }
        else ans += s[(b[i] - '0' + a[i] - '0') % 13];
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}