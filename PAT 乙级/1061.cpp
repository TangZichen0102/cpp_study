#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[1005], b[1005];
int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
            int _t;
            cin >> _t;
            if(_t == b[j]) sum += a[j];
        }
        cout << sum << endl;
    }
    return 0;
}