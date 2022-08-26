#include <bits/stdc++.h>

using namespace std;
long long n;
long long ans;
int main() {
    cin >> n;
    for(long long i = 2; i <= sqrt(2 * n); i++)
        if((2 * n + i - i * i) % (2 * i) == 0) ans++;
    cout << ans;
    return 0;
}
