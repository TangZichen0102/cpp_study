#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[1005][1005];
int b[1005];
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> m >> n;
    for(int i = 0; i < m; i++) b[i] = -1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    for(int i = 0; i < m; i++) {
        int col = i + 1;
        int row = 0;
        for(int j = 0; j < n; j++) {
            col += a[row][j + a[row][j]];
            cout << col << ":" << a[row][j] << " " << a[row][j + a[row][j]] << " " << row << " " << j + a[row][j] << endl;
            if(col >= n || col <= 0 || a[row][j] != a[row][j + a[row][j]]) {
                col = -1;
                cout << -1 << " ";
                break;
            }
            row++;
        }
        cout << endl;
        b[i] = col;
    }
    for(int i = 0; i < n; i++) cout << b[i] << " ";
    return 0;
}