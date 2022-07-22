#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long p;
    cin >> n >> p;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int res = 0, t = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + res; j < n; j++) {
            if(v[j] <= v[i] * p) {
                t = j - i + 1;
                if(t > res) res = t;
            }
            else break;
        }
    }
    cout << res;
    return 0;
}