#include <bits/stdc++.h>

using namespace std;
int a[25][25];
int main() {
    for (int j = 0; j <= 10; j++) {
        a[0][j] = 1;
        a[1][j] = 1;
    }
    for (int i = 0; i <= 10; i++) {
        a[i][0] = 1;
        a[i][1] = 1;
    }
    for (int i = 2; i <= 10; i++)
        for (int j = 2; j <= 10; j++)
            if (i >= j) a[i][j] = a[i][j - 1] + a[i - j][j];
            else a[i][j] = a[i][i];
    int t, m, n;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        cout << a[n][m] << endl; 
    }
    return 0;
}
