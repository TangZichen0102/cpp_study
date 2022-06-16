#include <bits/stdc++.h>

using namespace std;
int n, r, a[35];
void dfs(int pos, int cnt) {
    if(cnt == r) {
        for(int i = 0; i < cnt; i++) cout << setw(3) << a[i];
        cout << endl;
        return;
    }
    for(int i = pos; i <= n; i++) {
        a[cnt] = i;
        dfs(i + 1, cnt + 1);
    }
}
int main() {
    cin >> n >> r;
    dfs(1, 0);
    return 0;
}