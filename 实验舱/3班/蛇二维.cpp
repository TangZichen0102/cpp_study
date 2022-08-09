#include<bits/stdc++.h>

using namespace std;
int a[101][101];

int main() {
    int n, m, cnt = 1, x = 1, y = 0;
    cin >> n >> m;
    int side = 0; // 0 右, 1:下, 2:左 3:上
    int dic[4][2] = {{0,  1}, //右
                     {1,  0}, //下
                     {0,  -1}, //左
                     {-1, 0}}; //上
    while (cnt <= n * m) {
        int tx = x + dic[side % 4][0]; //目标点行坐标
        int ty = y + dic[side % 4][1]; //目标点纵坐标
        if (tx < 1 || tx > n || ty < 1 || ty > m ||   //边界判断
            a[tx][ty] > 0)  //是否已经赋值
            side++; // 转向
        x = tx, y = ty, a[x][y] = cnt++;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) cout << setw(5) << a[i][j];
        cout << endl;
    }
    return 0;
}