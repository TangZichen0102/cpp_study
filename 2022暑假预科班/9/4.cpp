#include <bits/stdc++.h>

using namespace std;
string s;
int maxn = INT_MIN;
int main() {
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        string S;
        for(int j = 0; j <= i; j++) S += s[j];
        // cout << S << endl;
        int sum = 0;
        for(int j = S.size(); j <= s.size();) {
            if(s.find(S, j) == j) {
                sum++;
                j += S.size();
            }
            else {
                maxn = max(maxn, sum);
                break;
            }
        }
    }
    cout << maxn + 1;
    return 0;
}