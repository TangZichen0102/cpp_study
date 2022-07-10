#include <bits/stdc++.h>

using namespace std;
int n;
bool is_prime(int n) {
    if(n == 1) return false;
    for(int i = 2; i <= n / i; i++)
        if(n % i == 0) return false;
    return true;
}
int main() {
    cin >> n;
    if(is_prime(n)) cout << "Yes";
    else cout << "No";
    return 0;
}