#include <bits/stdc++.h>

using namespace std;
int n, k;
int a[25];
long long sum;
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) {
        int flag = 0;
        for(int j = 1; j <= n; j++)
            if(j % a[i] == 1) {
                flag = 1;
                break;
            }
        if(flag) continue;
        sum++;
    }
    cout << sum;
    return 0;
}