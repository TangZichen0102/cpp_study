#include <bits/stdc++.h>

using namespace std;
int maxn = INT_MIN, maxidx = INT_MIN;
unordered_map<int, int> m;
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        m[a] += b;
    }
    for(auto i: m) {
        if(i.second > maxn) {
            maxn = i.second;
            maxidx = i.first;
        }
    }
    cout << maxidx << " " << maxn;
    return 0;
}