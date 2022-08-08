#include <bits/stdc++.h>

using namespace std;
int n, m, r, c;
int a[1005][1005];
int main() {
    int cnt = 1;
    cin >> n >> m >> r >> c;
    int x1, y1, x2, y2;
    for(int i = 1; i <= n; i++) {
        int flag = 0;
        for(int j = 1; j <= m; j++, cnt++) {
            if(cnt == r) x1 = i, y1 = j;
            if(cnt == c) {
                x2 = i, y2 = j;
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    // cout << x1 << " " << y1 << endl << x2 << " " << y2 << endl;
    cout << abs(x2 - x1) + abs(y2 - y1);
    return 0;
}