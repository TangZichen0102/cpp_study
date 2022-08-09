#include <bits/stdc++.h>

using namespace std;
int X[8][2] = {{-1, -1},
               {-1, 0},
               {-1, 1},
               {0,  1},
               {1,  1},
               {1,  0},
               {1,  -1},
               {0,  -1}};

int main() {
    char c[101][101];
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> c[i][j];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (c[i][j] == '*') cout << "*";
            else {
                for (int k = 0; k < 8; ++k) {
                    int A = i + X[k][1];
                    int B = j + X[k][0];
                    if (c[A][B] == '*') ans++;
                }
                cout << ans;
            }
        }
        cout << endl;
    }
    return 0;
}