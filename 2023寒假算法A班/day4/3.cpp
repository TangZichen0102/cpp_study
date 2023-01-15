#include <bits/stdc++.h>

using namespace std;
int n, k, a[100005];
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    if(k == n - 1) {
        sort(a + 1, a + n + 1);
        for(int i = 1; i <= n; i++) cout << a[i] << " ";
        return 0;
    }
    for(int i = 1; i <= k; i++) {
        int flag = 0;
        for (int j = 1; j < n; ++j) 
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        if(flag == 0) {
            for(int i = 1; i <= n; i++) cout << a[i] << " ";
            return 0;
        }
    }
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}