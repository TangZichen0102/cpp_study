#include <bits/stdc++.h>

using namespace std;
int n, m, k;
char c[15][15];
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> c[i][j];
    for(int i = 0; i < n; i++) {
        string s = "";
        for(int j = 0; j < m; j++) {
            cout << c[i][j] << c[i][j];
            s += c[i][j];
            s += c[i][j];
        }
        cout << endl << s << endl;
    }
    return 0;
}

/*
3 5 2
****.
*..*.
****.



********..
********..
**....**..
**....**..
********..
********..
*/