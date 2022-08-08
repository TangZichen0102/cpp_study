#include <bits/stdc++.h>

using namespace std;
int a, b, c, d;
int main() {
    scanf("%d+%di", &a, &b);
    scanf("%d+%di", &c, &d);
    cout << (a * c - b * d) << '+' << (b * c + a * d) << 'i';
    return 0;
}