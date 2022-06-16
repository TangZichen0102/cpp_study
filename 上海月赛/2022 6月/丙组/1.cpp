#include <bits/stdc++.h>

using namespace std;
int n;
int main() {
    cin >> n;
    int a = n / 20;
    n %= 20;
    int b = n / 10;
    n %= 10;
    int c = n / 5;
    n %= 5;
    int d = n / 1;
    cout << a + b + c + d;
    return 0;
}