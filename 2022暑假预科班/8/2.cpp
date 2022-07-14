#include <bits/stdc++.h>

using namespace std;
unordered_map<int, int> m;
int minn = INT_MAX;
int maxn = INT_MIN;
int ans;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _t;
        cin >> _t;
        string s = to_string(_t);
        // cout << s << endl;
        int sum = 1;
        for(int j = 0; j < s.size(); j++) sum *= s[j] - '0';
        // cout << endl;
        // cout << sum << endl;
        if(m[sum] == 0) m[sum]++, ans++;
        else {
            if(m[sum] >= maxn && sum <= minn) minn = sum, maxn = m[sum];
        }
    }
    cout << ans << " " << minn;
    return 0;
}