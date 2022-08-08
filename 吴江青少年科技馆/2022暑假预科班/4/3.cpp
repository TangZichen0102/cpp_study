#include <bits/stdc++.h>

using namespace std;
int t, n, m, r, c, x;

bool fun1(int x, int y, int z) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < m; j++) {
            if(i == x && j == y) {
                flag = 1;
                break;
            }
            cnt++;
        }
        if(flag == 1) break;
    }
    if(cnt == z) return true;
    else return false;
}
bool fun2(int x, int y, int z) {
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        int flag = 0;
        for(int j = 0; j < n; j++) {
            if(j == x && i == y) {
                flag = 1;
                break;
            }
            cnt++;
        }
        if(flag == 1) break;
    }
    if(cnt == z) return true;
    else return false;
}
int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m >> r >> c >> x;
    }
    return 0;
}