#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
struct POANT {
    int address, data, next;
} nodes[MAXN];
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    int h, n, k;
    cin >> h >> n >> k;
    for (int i = 0; i < n; i++) {
        int add, dat, nex;
        cin >> add >> dat >> nex;
        nodes[add] = {add, dat, nex};
    }
    vector<int> a, ans;
    vector<vector<int>> b;
    for(int i = h; i != -1; i = nodes[i].next) a.push_back(i);
    for (int i = 0; i < n; i++) {
        int idx = i / k;
        if(idx >= b.size()) {
            vector<int> temp;
            b.push_back(temp);
        }
        b[idx].push_back(a[i]);
    }
    for(int i = b.size() - 1; i >= 0; i--)
        for(int j = 0; j < b[i].size(); j++) ans.push_back(b[i][j]);
    for(int i = 0; i < n - 1; i++) printf("%05d %d %05d\n", ans[i], nodes[ans[i]].data, ans[i + 1]);
    printf("%05d %d -1\n", ans[ans.size() - 1], nodes[ans[ans.size() - 1]].data);
    return 0;
}