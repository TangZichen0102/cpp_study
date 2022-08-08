#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
struct POANT {
    int address, data, next;
} nodes[MAXN];
int main() {
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    int h, n, k;
    cin >> h >> n >> k;
    for (int i = 0; i < n; i++) {
        int add, dat, nex;
        cin >> add >> dat >> nex;
        nodes[add] = {add, dat, nex};
    }

    //插入变量
    vector<int> a1, a2, a3, ans;
    for (int i = 0; i < n; i++) {
        int da = nodes[h].data;
        if (da < 0) a1.push_back(h);
        else if (da >= 0 && da <= k) a2.push_back(h);
        else a3.push_back(h);
        h = nodes[h].next;
    }

    //合成大的链表
    for(auto i:a1) ans.push_back(i);
    for(auto i:a2) ans.push_back(i);
    for(auto i:a3) ans.push_back(i);

    //输出
    for(int i = 0; i < n - 1; i++) {
        printf("%05d %d %05d\n", ans[i], nodes[ans[i]].data, ans[i + 1]);
    }
    printf("%05d %d -1\n", ans[ans.size() - 1], nodes[ans[ans.size() - 1]].data);
    return 0;
}