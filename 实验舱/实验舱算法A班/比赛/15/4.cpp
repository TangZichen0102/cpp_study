#include <bits/stdc++.h>

using namespace std;
int n, a[1000100], idx, cnt;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    while(idx < n) {
        cnt++;
        int d = a[idx];
        if(idx == 0 || idx - d < 0) idx += d;
        else if(a[min(idx + d, n)] >= a[max(idx - d, 0)]) idx += d;
        else idx = max(idx - d, 0);
        printf("cnt:%d\nidx:%d,a[idx]:%d\n", cnt, idx, a[idx]);
    }
    cout << cnt;
    return 0;
}