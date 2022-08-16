#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
int dx[8] = {-1, 0, 1, 0, 1, -1, 1, -1};
int dy[8] = {0, -1, 0, 1, 1, -1, -1, 1};
char c[105][105];
void dfs(int x, int y) {
    if (x > n || y > m || x < 0 || y < 0 || c[x][y] == '.') return;
    c[x][y] = '.';
    for (int i = 0; i < 8; i++) dfs(x + dx[i], y + dy[i]);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++) c[i][j] = s[j];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            if (c[i][j] == 'W') ans++, dfs(i, j);
    cout << ans;
    return 0;
}