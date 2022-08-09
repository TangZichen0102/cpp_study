#include<bits/stdc++.h>

using namespace std;
int a[101][101];

int main() {
    int n, cnt = 1;
    int sumLine = 1 + 1; //第一格的对角线和
    cin >> n;
    for (int k = 1; k <= n; ++k) {   //上半部份是n次
        if (sumLine % 2 == 0)
            for (int i = 1; i <= k; ++i) a[sumLine - i][i] = cnt++;
        else
            for (int i = 1; i <= k; ++i) a[i][sumLine - i] = cnt++;
        sumLine++; // 下一条对角线和是上一组+1
    }
    for (int k = 2; k <= n; ++k) {   //下半部份是n-1次  ,下标是2--n
        if (sumLine % 2 == 0)
            for (int i = k; i <= n; ++i) a[sumLine - i][i] = cnt++;
        else
            for (int i = k; i <= n; ++i) a[i][sumLine - i] = cnt++;
        sumLine++;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    return 0;
}
