#include <bits/stdc++.h>

using namespace std;
int n, x;
int cnt[100005][0], id[1000005];
bool cmp(int x, int y) {
    int vis = 0;
    for(int i = 1; i <= 5; i++) {
        if(cnt[x][i] < cnt[y][i]) vis++;
    }
    return vis >= 3;
}
int main() {
    cin >> n;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> x;
            cnt[i][x] = j;
        }
    }
    for(int i =1; i <= n; i++) id[i] = i;
    sort(id + 1, id + n + 1, cmp);
    for(int i = 1; i <= n; i++) cout << id[i] << " ";
    return 0;
}