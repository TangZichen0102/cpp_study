#include <bits/stdc++.h>

using namespace std;
int q[10000][10000];
int main() {
    int m, n, N;
    cin >> N;
    for(n = sqrt((double)N); n >= 1; n--) {
        if(N % n == 0) {
            m = N / n;
            break;
        }
    }
    vector<int> a(N);
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    for(int i = 0; i < N; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int> ());
    int x = 0, y = 0, d = 1;
    for(int i = 0; i < m * n; i++) {
        q[x][y] = a[i];
        int a = x + dx[d], b = y + dy[d];
        if(a < 0 || a >= m || b < 0 || b >= n || q[a][b]) {
            d = (d + 1) % 4;
            a = x + dx[d];
            b = y + dy[d];
        }
        x = a, y = b;
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << q[i][j];
            if(j != n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}