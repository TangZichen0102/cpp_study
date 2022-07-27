#include <bits/stdc++.h>

using namespace std;
int maxn = 0;
int maxidx = -100;
unordered_map<int, int> m;
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d-%d %d", &a, &b, &c);
        m[a] += c;
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