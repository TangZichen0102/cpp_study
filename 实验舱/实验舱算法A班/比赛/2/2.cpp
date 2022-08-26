#include <bits/stdc++.h>

using namespace std;
long long n, m;
bool visR[100005], visC[100005];
long long cntR, cntL;
long long ans;
int main() {
    cin >> n >> m;
    while(m--) {
        long long x, y;
        cin >> x >> y;
        if(!visR[x]) {
            visR[x] = true;
            cntR++;
            ans += n - cntL;
        }
        if(!visC[y]) {
            visC[y] = true;
            cntL++;
            ans += n - cntR;
        }
        cout << n * n - ans << endl;
    }
    return 0;
}