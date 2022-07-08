#include <bits/stdc++.h>

using namespace std;
int x;
int main() {
    cin >> x;
    if(x < 1) cout <<x;
    else if(1 <= x && x < 10) cout << 2 * x- 1;
    else if(x >= 10 && x < 15) cout << 3 * x + 4;
    else if(x >= 15 && x < 30) cout << 90 - 5 * x;
    else cout << 80 + 3 * x;
    return 0;
}