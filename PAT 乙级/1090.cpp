#include <bits/stdc++.h>

using namespace std;
int a[10005];
unordered_map<int, vector<int> > mp;
int n, k;
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    while(k--) {
        int t;
        cin >> t;
        bool flag = false;
        unordered_map<int, int> hush;
        for(int i = 0; i < t; i++) cin >> a[i], hush[a[i]] = 1;
        for(int i = 0; i < t; i++) {
            for(int j = 0; j < mp[a[i]].size(); j++) {
                if(hush[mp[a[i]][j]]) flag = true;
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}