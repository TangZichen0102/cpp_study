#include <bits/stdc++.h>

using namespace std;
map<string, int> mp;
string name[1100];
int maxn = INT_MIN;
string maxname;
int main() {
    int n, m, k;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name[i];
        mp[name[i]] = n;
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> k;
        for(int i = 0; i < k; i++) {
            string _t;
            cin >> _t;
            mp[_t]--;
        }
    }
    for(auto i:mp) {
        if(i.second > maxn) {
            maxn = i.second;
            maxname = i.first;
        }
    }
    cout << maxname;
    return 0;
}