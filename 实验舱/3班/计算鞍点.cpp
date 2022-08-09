#include<bits/stdc++.h>

using namespace std;
int n, m;
int maxRow[6][3], minCol[6][3];
int a[6][6];

void printMax() {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << maxRow[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << minCol[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    n = 5, m = 5;
//    cin >> n >> m;
    memset(minCol, 0x3f, sizeof(minCol));

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for (int i = 1; i <= n; ++i) {  //行最大值
        for (int j = 1; j < m; ++j) {
            if (a[i][j] > a[i][j + 1]) {
                if (a[i][j] > maxRow[i][2]) {
                    maxRow[i][0] = i, maxRow[i][1] = j;
                    maxRow[i][2] = a[i][j];
                }
            } else {
                if (a[i][j + 1] > maxRow[i][2]) {
                    maxRow[i][0] = i, maxRow[i][1] = j + 1;
                    maxRow[i][2] = a[i][j + 1];
                }

            }
        }
    }
    for (int i = 1; i <= m; ++i) {  //列最小值
        for (int j = 1; j < n; ++j) {
            if (a[j][i] < a[j + 1][i]) {
                if (a[j][i] < minCol[i][2]) {
                    minCol[i][0] = j;
                    minCol[i][1] = i;
                    minCol[i][2] = a[j][i];
                }
            } else {
                if (a[j + 1][i] < minCol[i][2]) {
                    minCol[i][0] = j + 1;
                    minCol[i][1] = i;
                    minCol[i][2] = a[j + 1][i];
                }
            }
        }
    }

//    printMax();
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (maxRow[i][0] == minCol[j][0]
                && maxRow[i][1] == minCol[j][1]
                && maxRow[i][2] == minCol[j][2]) {
                cout << maxRow[i][0] << " " << maxRow[i][1] << " " << maxRow[i][2] << endl;
                cnt;
            }
        }
    }
    if(!cnt) {
        cout <<"not found";
    }

    return 0;
}