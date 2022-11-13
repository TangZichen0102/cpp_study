#include <bits/stdc++.h>

using namespace std;
const int N = 100010;
int a[N], sum[N], n;
void carry(int s[]) {
    for (int i = 0; i < N; i++)
        if (s[i] >= 10) {
            s[i + 1] += s[i] / 10;
            s[i] %= 10;
        }
}
int main() {
    cin >> n;
    a[0] = 1, sum[0] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < N; j++) {
            a[j] *= i;
            sum[j] += a[j];
        }
        carry(a);
        carry(sum);
    }
    bool flag = true;
    for (int i = N; i >= 0; i--)
        if (flag && !a[i]) continue;
        else {
            flag = false;
            cout << sum[i];
        }
    return 0;
}