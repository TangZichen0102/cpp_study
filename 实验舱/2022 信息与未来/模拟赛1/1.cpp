#include <bits/stdc++.h>

using namespace std;
int n;
double sum;
__int128 a[16];
int main() {
    cin >> n;
    a[1] =1;
    for(int i = 2; i <= n; i++) a[i] = a[i-1] * i;

    for(int i = 1; i <= n; i++) sum += 1.0 / a[i];
    printf("%.10lf", sum + 1);
    return 0;
}
