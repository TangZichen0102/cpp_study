#include <bits/stdc++.h>

using namespace std;
string fun(int x, int n) {
    if(x == n) return "sin(" + to_string(n) + ")";
    return "sin(" + to_string(x) + "+" + fun(x + 1, n) + ")";
}
int main() {
    int n;
    cin >> n;
    cout << fun(1, n);
    return 0;
}