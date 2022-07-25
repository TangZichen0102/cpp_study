#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int v[N];
int main() {
    int n, maxn = 0, cnt = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i] && b[i] > maxn) v[cnt++] = b[i];
        if(b[i] > maxn) maxn = b[i];
    }
    cout << cnt << endl;
    for(int i = 0; i < cnt; i++) {
        if(i != 0) cout << " ";
        cout << v[i];
    }
    cout << endl;
    return 0;
}