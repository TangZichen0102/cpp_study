#include <bits/stdc++.h>

using namespace std;
int n;
int main() {
    cin >> n;
    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) cout << "Yes";
    else cout << "No";
    return 0;
}