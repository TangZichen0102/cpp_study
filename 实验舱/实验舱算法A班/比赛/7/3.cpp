#include <bits/stdc++.h>

using namespace std;
int n, maxx;
int vis[1000005];
void fac(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
                vis[i]++;
            }
            maxx = max(maxx, i);
        }
    }
    if(n > 1) {
        vis[n]++;
        maxx = max(maxx, n);
    }
}
int main() {
    cin >> n;
    for(int i = 2; i <= n; i++) fac(i);
    for(int i = 2; i <= maxx; i++) {
        if(vis[i]) cout << i << " " << vis[i] << endl;
    }
    return 0;
}