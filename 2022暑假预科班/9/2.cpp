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
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++) cout << a[i][j] << " ";
    //     cout << endl;
    // }
    for(int i = 0; i < m; i++) {
        int col = i;
        for(int j = 0; j < n; j++) {
            printf("i:%d j:%d col:%d\n", i, j, col);
            if(a[j][col] != a[j][col + a[j][col]]) {
                col = -1;
                break;
            }
            col += a[j][col];
            if(col >= m || col <= 0) {
                col = -1;
                break;
            }
        }
        cout << endl;
        b[i] = col;
    }
    for(int i = 0; i < n; i++) cout << b[i] << endl;
    return 0;
}