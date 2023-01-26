#include <bits/stdc++.h>

using namespace std;
int tf[100005], wf[100005];
int m, n, s, t = 1;
int main() {
    cin >> m >> n;
    for(int i = 1; i <= m; i++) cin >> tf[i];
    for(int i = 1; i <= n; i++) cin >> wf[i];
    sort(tf + 1, tf + 1 + m);
    sort(wf + 1, wf + 1 + n);
    for(int i = 1; i <= n; i++) {
        if(tf[t] == 0) t++;
        if(tf[t] < wf[i] && tf[t] != 0) {
            wf[i] = 0;
            t++;
        }
    }
    if(t <= m) {
        cout << 0;
        return 0;
    }
    for(int i = 1; i <= n; i++) s += wf[i];
    cout << s;
    return 0;
}