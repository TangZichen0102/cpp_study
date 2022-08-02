#include <bits/stdc++.h>

using namespace std;
int n, m;
int maxnn;
int a[105][105];
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
    for(int i = 0; i < n; i++) {
        int maxn = 0;
        for(int j = 0; j < m; j++) maxn = max(maxn, a[i][j]);
        cout << maxn;
        if(i != n - 1) cout << " ";
        maxnn = max(maxnn, maxn);
    }
    cout << endl << maxnn;
    return 0;
}