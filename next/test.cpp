#include <bits/stdc++.h>

using namespace std;
long long  n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        cout << int(sqrt(b)) - int(sqrt(a - 1)) << endl;
    }
    return 0;
}