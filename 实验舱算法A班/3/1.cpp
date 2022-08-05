#include <bits/stdc++.h>

using namespace std;
int n, c, r;
int main() {
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> c >> r;
        sum += c + r;
    }
    cout << sum;
    return 0;
}