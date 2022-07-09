#include <bits/stdc++.h>

using namespace std;
int k, n, x[510], w[510];
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) x[i] = 0, w[i] = 1;
    for(int i = 2; i <= int(sqrt(n)) + 1; i++) {
        if(x[i] == 0) {
            k = i * i;
            while(k <= n) {
                x[k] = i;
                k += i;
            }
        }
    }
    for(int i = n; i >= 1; i--)
        if(x[i] != 0) {
            w[x[i]] += w[i];
            w[i / x[i]] += w[i];
            w[i] = 0;
        }
    cout << w[2] << setw(5) << w[3] << setw(5) << w[5] << endl;
    return 0;
}