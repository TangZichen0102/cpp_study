#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int sum = 1;
    for(int i = 0; i < n; i++) sum = sum * 2;
    cout << sum * m  +1;
    return 0;
}