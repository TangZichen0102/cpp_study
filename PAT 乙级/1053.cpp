#include <bits/stdc++.h>

using namespace std;
int ans1, ans2, n, d;
double e, x;
int main(void) {
    cin >> n >> e >> d;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int s1 = 0;
        int s2 = 0;
        for(int j = 0; j < t; j++) {
            cin >> x;
            if(x < e) s1++;
            else s2++;
        }
        if(s1 > s2 && t > d) ans2++;
        else if(s1 > s2) ans1++;
    }
    printf("%.1lf%% %.1lf%%", ans1 * 100.0 / n, ans2 * 100.0 / n);
    return 0;
}