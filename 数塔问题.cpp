#include <bits/stdc++.h>

using namespace std;
int step = 0;

void h(int n, char a, char b, char c) {
    if (n == 0) return;
    else {
        h(n - 1, a, c, b);
        cout << step++ << ':' << a << "->" << n << "->" << c;
        h(n - 1, b, a, c);
    }
}

int main() {
    
    return 0;
}
