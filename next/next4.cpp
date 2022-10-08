#include <bits/stdc++.h>

using namespace std;
const int N = 10010;
int map2[15][15];
int pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int x = 1, y = 1, d = 0;
int n;
bool st[N];
int primes[N], cnt;
void get_primes(int n) {
    for (int i = 2; i <= n; i ++ ) {
        if (!st[i]) primes[cnt++] = i;
        for (int j = 0; primes[j] <= n / i; j ++ ) {
            st[primes[j] * i] = true;
            if (i % primes[j] == 0) break;
        }
    }
}
int main() {
    cin >> n;
    get_primes(N);
    for (int i = 1; i <= n * n; i++) {
        map2[x][y] = primes[i - 1];
        int tx = x + pos[d][0], ty = y + pos[d][1];
        if (tx > n || ty > n || tx < 1 || ty < 1 || map2[tx][ty]) d = (d + 1) % 4;
        x = x + pos[d][0], y = y + pos[d][1];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cout << map2[i][j] << " ";
        cout << endl;
    }
    return 0;
}
