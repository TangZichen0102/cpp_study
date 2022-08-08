#include <bits/stdc++.h>

using namespace std;
int sum;
int main() {
    int n, m;
    cin >> n >> m;
    while(n > 0 && m > 0) {
        if(n > m) m++, n -= 2;
        else n++, m -= 2;
        sum++;
    }
    cout << sum;
    return 0;
}