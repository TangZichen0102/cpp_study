#include <bits/stdc++.h>

using namespace std;
int n;
int sum = 0;
int main() {
    cin >> n;
    for(int i = 0; i <= n; i += 3) {
        for(int j = 0; j <= n - i; j++) {
            int k = n - i - j;
            if(i / 3 + j * 3 + k * 5 == n && i + j + k == n) {
                sum++;
                // cout << i << " " << j << " " << k << endl;
            }
        }
    }
    if(sum == 0) cout << "No Answer.";
    else cout << sum;
    return 0;
}