#include <bits/stdc++.h>

using namespace std;
int cnt;
int vis[10];
int main() {
    int n;
    cin >> n;
    if(n <= 10) {
        cout << n;
        return 0;
    }
    for(int i = 1;; i++) {
        memset(vis, 0, sizeof(vis));
        int flag = 0;
        int t = i;
        while(t) {
            if(vis[t % 10] == 1) {
                flag = 1;
                break;
            }
            vis[t % 10] = 1;
            t /= 10;
        }
        if(!flag) cnt++;
        if(cnt == n) {
            cout << i;
            return 0;
        }
    }
    return 0;
}