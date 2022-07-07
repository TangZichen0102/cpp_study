#include <bits/stdc++.h>

using namespace std;
int a[5][5];

int nmain() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <=3; j++) {
            if(i == 3) a[i][j] = a[i - 1][a[i - 1][j]] + 1;
            else a[i][j] - j;
            cout << setw(2) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}