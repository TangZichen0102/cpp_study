
#include <bits/stdc++.h>

using namespace std;
int a[100000000];
int n, weishu = 1;
long long sum;
int main() {
    a[1] = 1;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int up = 0, temp = 0;
        for (int j = 1; j <= weishu || up != 0; j++) {
            temp = a[j] * i + up;
            up = temp / 10;
            a[j] = temp % 10;
            weishu = max(weishu, j);
        }
    }
    for (int i = weishu; i >= 1; i--) sum += a[i];
    cout << sum;
    return 0;
}