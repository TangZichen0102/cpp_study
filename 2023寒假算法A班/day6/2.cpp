#include <bits/stdc++.h>
using namespace std;
int t;
long long h, w, cnt, sum;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%lld%lld", &h, &w);
        cnt = 0;
        sum = 0;
        while (1) {
            if (w > h) swap(h, w);
            cnt += h / w;
            sum++;
            if (h % w == 0) break;
            h %= w;
        }
        printf("%lld %lld %lld\n", cnt - 1, sum, cnt);
    }
    return 0;
}