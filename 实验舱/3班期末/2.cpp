#include <bits/stdc++.h>

using namespace std;
int n, m, k;
int x, y;
char a, b, Map[55][55];
unordered_map<int, pair<int, int>> dir = {{'R', {0, 1}},
                                          {'L', {0, -1}},
                                          {'U', {-1, 0}}, 
                                          {'D', {1, 0}}};
void print() {
    if(x >= 1 && x <= n && y >= 1 && y <= m) {
        Map[x][y] = a;
        x += dir[b].first;
        y += dir[b].second;
        print();
    }
}
void Printf() {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(Map[i][j] >= 'a' && Map[i][j] <= 'z') cout << Map[i][j];
            else cout << '.';
        }
        cout << endl;
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
    #endif
    cin >> n >> m >> k;
    for(int i = 1; i <= k; i++) {
        cin >> x >> y >> a >> b;
        print();
    }
    Printf();
    return 0;
}