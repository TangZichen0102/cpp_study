#include <bits/stdc++.h>

using namespace std;
long long n, a, sum;
int main() {
    cin >> n >> a;
    for(int i = 1; i <= n; i++) {
        long long s = 0;
        for(int j = 1; j <= i / j; j++) {
            if(i % j == 0) {
                if(j == i / j) s += j;
                else s += j + i / j;
            }
        }
        long long t = i * (i % 2 == 0 ? 1 : -1);
        // cout << s << " " << t << " " << a << " " << s - t + a << endl;
        sum += s - t + a;
    }
    cout << sum;
    return 0;
}