#include<bits/stdc++.h>

using namespace std;
int a[100000];

int main() {
    int n;
    int j;
    cin >> n;
    a[0] = 1, a[1] = 1;
    for (int i = 1; i <= n; i++) {
        for (j = 1; j <= a[0]; j++) a[j] *= i;
        for (j = 1; j <= a[0]; j++) {
            a[j + 1] += a[j] / 10;
            a[j] %= 10;
        }
        if (a[j] > 0) {
            while (a[j] > 10) {
                a[j + 1] += a[j] / 10;
                a[j] %= 10;
                j++;
            }
            a[0] = j;
        }
    }
    for (int i = a[0]; i >= 1; i--) cout << a[i];
    return 0;
}
