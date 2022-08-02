#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n){
    if(n == 0 || n == 1) return false;
    for(int i = 2; i <= n / i; i++) 
        if(n % i == 0) return false;
    return true;
}
int main() {
    int n;
    cin >> n;
    if(is_prime(n) && is_prime(n - 6)) cout << "Yes" << endl << n - 6;
    else if(is_prime(n) && is_prime(n + 6)) cout << "Yes" << endl << n + 6;
    else {
        cout << "No" << endl;
        if(n == 0 || n == 1) {
            cout << 5;
            return 0;
        }
        while(!(is_prime(n) && is_prime(n - 6) || is_prime(n) && is_prime(n + 6))) n++;
        cout << n;
    }
    return 0;
}