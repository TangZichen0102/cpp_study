#include <bits/stdc++.h>

using namespace std;
int n;
long long a[200010];
int premax = INT_MIN;
int main() {
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n;
    for(int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        for(int j = 1; j <= t; j++) scanf("%lld", a + j);
        string f;
        cin >> f;
        int l, r;
        int flag = 0;
        premax = INT_MIN;
        for(int j = 1; j <= f.size(); j++) {
            if(f[j] == '1') {
                l = j, r = j;
                for(int k = j + 1; k <= f.size(); k++) {
                    if(f[k] == '1') r++;
                    else break;
                }
                if(r == f.size()) break;
                sort(a + l + 1, a + r + 3);
                // cout << premax << " ";
                if(premax > a[l + 1]) {
                    flag = 2;
                    break;
                }
                premax = a[r + 2];
                // cout << premax << endl;
                j = r + 1;
            }
        }
        for(int j = 1; j <= t - 1; j++) {
            if(a[j] >= a[j + 1]) {
                flag = 1;
                break;
            }
        }
        if(flag > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}