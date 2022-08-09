#include<bits/stdc++.h>

using namespace std;
int n, a[101][101], row, col;

int main() {
    cin >> n;
    row = 1, col = (n + 1) / 2;
    for (int i = 1; i <= n * n; i++) {
        a[row][col] = i;
        if (!a[(row - 2 + n) % n + 1][col % n + 1])
            row = (row - 2 + n) % n + 1, col = col % n + 1;
        else row = row % n + 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}