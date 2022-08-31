#include <bits/stdc++.h>

using namespace std;
unsigned long long a[5100], S[5100];
int main() {
    int t;
    cin >> t;
    a[1] = 1, a[2] = 1;
    for(int i = 3; i <= 4000; i++) a[i] = a[i - 1] + a[i - 2];
    for(int i = 1; i <= 4000; i++) S[i] = S[i - 1] + a[i];
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << S[n] << endl;
    }
    return 0;
}