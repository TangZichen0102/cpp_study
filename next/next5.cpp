#include <bits/stdc++.h>

using namespace std;
int n, m, t, j, a[1000001];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n - 1; i++) {
        t = 0;
        while (t < m) {
            if (j == n) j = 0;
            j++;
            if (a[j] == 0) t++;
        }
        a[j] = 1;
    }
    for (int i = 1; i <= n; i++)
        if (a[i] == 0) {
            cout << i << endl;
            return 0;
        }
    return 0;
}
