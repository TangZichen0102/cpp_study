#include <bits/stdc++.h>

using namespace std;
unordered_map<int, int> m;
int main() {
    int n, k;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _t;
        cin >> _t;
        m[_t]++;
    }
    cin >> k;
    for(int i = 0; i < k; i++) {
        int _t;
        cin >> _t;
        if(i == k - 1) cout << m[_t];
        else cout << m[_t] << " ";
    }
    return 0;
}