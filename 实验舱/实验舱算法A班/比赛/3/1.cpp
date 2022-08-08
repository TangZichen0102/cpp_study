#include <bits/stdc++.h>

using namespace std;
long long n, r, c, rt, ct;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c >> r;
        ct += c;
        rt = max(rt, ct);
        rt += r;
    }
    cout << rt << endl;
    return 0;
}