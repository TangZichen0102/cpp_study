#include <bits/stdc++.h>

using namespace std;
long long n;
int main() {
    scanf("%lld", &n);
    for(long long i = 5; i * i <= n; i += 10) printf("%lld\n", i * i);
    return 0;
}