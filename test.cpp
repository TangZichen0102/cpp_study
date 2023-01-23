#include <bits/stdc++.h>

using namespace std;
int sum;
int n;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) sum += n / i;
    cout << sum;
    return 0;
}