#include <bits/stdc++.h>

using namespace std;
int a[15][15];
int main() {
    int n, m;
    for(m = 0; m < 15; m++) a[m][0] = 1, a[m][1] = 1;
    for(n = 0; n < 15; n++) a[0][n] = 1, a[1][n] = 1;
    for(m = 2; m < 15; m++) 
        for(n = 2; n < 15; n++) {
            if(m >= n) a[m][n] = a[m - n][n] + a[m][n - 1];
            else a[m][n] = a[m][m];
       }
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> m >> n;
        cout << a[m][n] << endl;
    }
    return 0;
}