#include <bits/stdc++.h>

using namespace std;
unordered_map<int, int> m;
int minn = INT_MAX;
int maxn = INT_MIN;
int ans;
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _t;
        cin >> _t;
        string s = to_string(_t);
        int sum = 1;
        for(int j = 0; j < s.size(); j++) sum *= s[j] - '0';
        m[sum]++; 
    }
    for(auto j:m) {
        if(j.second >= maxn) { 
            maxn = j.second;
        }
    }
    for(auto j:m) {
        if(j.second == maxn) minn = min(minn, j.first);
    }
            // cout << j.first << ":" << j.second << endl;
    cout << m.size() << " " << minn;
    return 0;
}