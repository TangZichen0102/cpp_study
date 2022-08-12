#include <bits/stdc++.h>

using namespace std;
int cnt;
int main() {
    int n;
    cin >> n;
    if(n == 1) {
        cout << 1;
        return 0;
    }
    for(int i = 1;; i++) {
        string s = to_string(i);
        int vis[15];
        memset(vis, 0, sizeof(vis));
        int flag = 0;
        for(int i = 0; i < s.size(); i++) {
            int d = s[i] - '0';
            if(vis[d] == 1) {
                flag = 1;
                break;
            }
            vis[d] = 1;
        }
        
        if(!flag) cnt++;
        if(cnt == n) {
            cout << i;
            return 0;
        }
    }
    return 0;
}