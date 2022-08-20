#include <bits/stdc++.h>

using namespace std;
int n, a[1000010];
int idx, cnt;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    while(idx < n) {
        cnt++;
        int d = a[idx];
        if(idx == 0) idx += d;
        else if(a[idx + d] >= max(a[idx - d], 0)) idx += d;
        else idx = max(idx - d, 0);
    }
    cout << cnt;
    return 0;
}