#include <bits/stdc++.h> 
using namespace std;
struct node {
    int idx1, idx2, idx3;
};
vector<node> r;
int n, ans1, ans2, x[1001], y[1001], z[1001], maxV = 6, minV = 36, a[11];
bool check() {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (auto v : r)
            if (a[v.idx1] == x[i] && a[v.idx2] == y[i] && a[v.idx3] == z[i]) {
                cnt++;
                break;
            }
    return cnt == n;
}
void dfs(int idx, int sum)
{
    if (idx >= 7) {
        if (check()) maxV = max(sum, maxV), minV = min(sum, minV);
        return;
    }
    for (int i = 1; i <= 6; i++) {
        a[idx] = i;
        dfs(idx + 1, sum + i);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    if (n == 0) {
        cout << "6 36";
        return 0;
    }
    r.push_back({1, 2, 3}), r.push_back({1, 3, 5}), r.push_back({1, 5, 4}), r.push_back({1, 4, 2}), r.push_back({2, 1, 4}), r.push_back({2, 4, 6}), r.push_back({2, 6, 3}), r.push_back({2, 3, 1}), r.push_back({3, 1, 2}), r.push_back({3, 2, 6}), r.push_back({3, 6, 5}), r.push_back({3, 5, 1}), r.push_back({4, 1, 5}), r.push_back({4, 5, 6}), r.push_back({4, 6, 2}), r.push_back({4, 2, 1}), r.push_back({5, 1, 3}), r.push_back({5, 3, 6}), r.push_back({5, 6, 4}), r.push_back({5, 4, 1}), r.push_back({6, 2, 4}), r.push_back({6, 4, 5}), r.push_back({6, 5, 3}), r.push_back({6, 3, 2});
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i] >> z[i];
    dfs(1, 0);
    cout << minV << " " << maxV;
    return 0;
}
