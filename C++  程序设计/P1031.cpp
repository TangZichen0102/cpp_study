#include <bits/stdc++.h>

using namespace std;
int n;
int sum = 1;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) sum *= i;
    cout << sum;
    return 0;
}