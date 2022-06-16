#include <bits/stdc++.h>
using namespace std;
const int N = 10 + 5;
int a[N][N];
int n = 10;
int dx[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
int ans = 0;
struct node {
    int x;
    int y;
} f, t;
void bfs(int xx, int yy) {
    queue<node> q;
    t.x = xx;
    t.y = yy;
    a[t.x][t.y] = 1;
    q.push(t);
    while (!q.empty()) {
        f = q.front();
        for (int k = 0; k < 4; k++) {
            int nx = f.x + dx[k][0];
            int ny = f.y + dx[k][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !a[nx][ny]) {
                a[nx][ny] = 1;
                t.x = nx;
                t.y = ny;
                q.push(t);
            }
        }
        q.pop();
    }
}
int main()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int j = 0; j <= 9; j++)
        if (a[0][j] == 0)
            bfs(0, j);
    for (int j = 0; j <= 9; j++)
        if (a[9][j] == 0)
            bfs(9, j);
    for (int i = 0; i <= 9; i++)
        if (a[0][i] == 0)
            bfs(0, i);
    for (int i = 0; i <= 9; i++)
        if (a[9][i] == 0)
            bfs(9, i);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == 0)
                ++ans;
    cout << ans;
    return 0;
}