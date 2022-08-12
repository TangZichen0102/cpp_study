#include <bits/stdc++.h>

using namespace std;
int n;
int main() {
    cin >> n;
    while(true) {
        if(n % 2 == 0) n = n / 2;
        else n = n * 3 + 1;
        cout << n << " ";
        if(n == 1) return 0;
    }
    return 0;
}