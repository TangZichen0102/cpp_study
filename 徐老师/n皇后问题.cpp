#include <bits/stdc++.h>

using namespace std;
int h[100];
int a[100]; //左下到右上对角线
int b[100]; //右小到左上对角线
int v[21][21];
int cont = 0;
int n = 0;

void print() {
    cont++;
    cout << "No." << cont << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}

void dfs(int row) {
    if (row == n) print();
    else
        for (int col = 0; col < n; col++) {
            if (h[col] == 0 && a[row + col] == 0 && b[row - col + n] == 0) {
                //放子
                a[row + col] = 1;
                b[row - col + n] = 1;
                h[col] = 1;
                v[row][col] = 1;
                //递归下一步
                dfs(row + 1);
                //回溯
                a[row + col] = 0;
                b[row - col + n] = 0;
                h[col] = 0;
                v[row][col] = 0;
            }
        }
}

int check() {
    if (n > 8) {
        cout << "棋盘太大了" << endl;
        return 0;
    }
    return 1;
}

int main() {
    cout << "输入几皇后:";
    cin >> n;
    if (check())
        dfs(0);
    return 0;
}
