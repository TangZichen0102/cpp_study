#include <bits/stdc++.h>

using namespace std;
int a[105][105], b[10005];
bool c[100000005];
void ai() {
    int n = 10000005;
    c[1] = 1;
    int k = 0;
    for (int i = 2; i <= n / i; i++) {
        if (c[i])  continue;
        for (int j = i * i; j <= 10000005; j += i) c[j] = 1;
    }
    for (int i = 2; i <= 10000005; i++)
        if (c[i] == 0) b[k++] = i;
}
int main() {
    int flag = 0, i = 0, j = 0, n, l = 0;
    cin >> n;
    ai();
    for (int x = 1; x <= n * n; x++) {
        a[i][j] = b[l++];
        switch (flag) {
            case 0:
                j++;
                if (j == n - 1 || a[i][j + 1] > 0)  flag = 1;
                break;
            case 1:
                i++;
                if (i == n - 1 || a[i + 1][j] > 0) flag = 2;
                break;
            case 2:
                j--;
                if (j == 0 || a[i][j - 1] > 0) flag = 3;
                break;
            case 3:
                i--;
                if (i == 0 || a[i - 1][j] > 0) flag = 0;
                break;
       }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
