#include <bits/stdc++.h>

using namespace std;
int n, sum;
int a[50005];
unordered_map<int, int> m;
int main() {
    cin >> n >> sum;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]] = i;
    }
    for(int i = 0; i < n; i++) {
        if(m[sum - a[i]] != 0) {
            cout << i << " " << m[sum - a[i]];
            return 0;
        }
    }
    cout << "ERROR";
    return 0;
}