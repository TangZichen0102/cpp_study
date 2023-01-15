#include <bits/stdc++.h>

using namespace std;
int T, t;
long long n, m, cnt, x;
int main()
{
    scanf("%d", &T);
    while (T--) {
        scanf("%lld%lld%d", &m, &n, &t);
        if (t == 1) {
            cnt = 1;
            while (cnt <= m && n > 0) cnt *= n, n--;
            if (cnt > m) printf("TLE\n");
            else printf("AC\n");
        }
        else if (t == 2) {
            cnt = 1;
            while (cnt <= m && n > 0) cnt *= 2, n--;
            if (cnt > m) printf("TLE\n");
            else printf("AC\n");
        }
        else if (t == 3) {
            if (n > m || n * n > m || n * n * n > m || n * n * n * n > m) printf("TLE\n");
            else printf("AC\n");
        }
        else if (t == 4) {
            if (n > m || n * n > m || n * n * n > m) printf("TLE\n");
            else printf("AC\n");
        }
        else if (t == 5) {
            if (n > m || n * n > m) printf("TLE\n");
            else printf("AC\n");
        }
        else if (t == 6) {
            if (n > m) printf("TLE\n");
            else printf("AC\n");
        }
        else {
            cnt = 0;
            x = n;
            while (x > 0) cnt++, x /= 2;
            if (n > m || n * cnt > m) printf("TLE\n");
            else printf("AC\n");
        }
    }
    return 0;
}