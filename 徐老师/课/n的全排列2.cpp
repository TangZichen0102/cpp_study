#include <bits/stdc++.h>

using namespace std;
int a[21], vis[21];
int n, r;

void print() {
    for (int i = 1; i <= r; i++) cout << a[i] << " ";
    cout << endl;
}

int dfs(int step) {
    if (step == r + 1) print();
    else
        for (int i = 1; i < n + 1; i++) {
            if (vis[i] == 0) {
                a[step] = i;
                vis[i] = 1;
                dfs(step + 1);
                vis[i] = 0;
            }
        }
}

int main() {
    cin >> n >> r;
    dfs(1);
    return 0;
}
