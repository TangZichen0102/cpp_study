#include<bits/stdc++.h>

using namespace std;
int Map[105][105];
int pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int main() {
    int n;
    cin >> n;
    int x = 1, y = 1, d = 0;
    for(int i = 1; i <= n * n; i++) {
        Map[x][y] = i;
        int tx = x + pos[d][0], ty = y + pos[d][1];
        if(tx > n || ty > n || tx < 1 || ty < 1 || Map[tx][ty]) d = (d + 1) % 4;
        x = x + pos[d][0], y = y + pos[d][1];
    }
    for(int i = 1; i <= n; i++) {
    	for(int j = 1; j <= n; j++) cout << left << setw(5) << Map[i][j];
    	cout << endl;
    }
    return 0;
}
