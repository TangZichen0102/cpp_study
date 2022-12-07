#include <bits/stdc++.h>

using namespace std;
int t, n, sum;
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> t >> n;
    for(int i = 1; i <= t; i++) {
        for(int j = 1; j <= n; j++) {
            string s1 = to_string(i), s2 = to_string(j);
            while(s2.size() < 2) s2 = "0" + s2;
            string s = s1 + s2;
            int flag = 1;
            reverse(s.begin(), s.end());
            for(int i = 0; i < s.size(); i++)
                if(s[i] != '6' && s[i] != '9' && s[i] != '8' && s[i] != '0' && s[i] != '1') {
                    flag = 0;
                    break;
                }
            if(flag == 0) continue;
            flag = 1;
            for(int i = 0; i < s.size(); i++) {
                if((s[i] == '8' || s[i] == '1' || s[i] == '0') || ((s[i] == '6' && s[s.size() - i - 1] == '9') || ((s[i] == '9' && s[s.size() - i - 1] == '6')))) continue;
                else {
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) continue;
            sum++;
        }
    }
    cout << sum;
    return 0;
}