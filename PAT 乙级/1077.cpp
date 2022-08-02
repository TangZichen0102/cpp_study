#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        double G2;
        cin >> G2;
        int cnt = 0, l = 999, r = -999;
        double G1 = 0;
        for(int j = 1; j < n; j++) {
            int x;
            cin >> x;
            if(x >= 0 && x <= m) cnt++, l = min(l, x), r = max(r, x), G1 += x;
        }
        G1 = (G1 - l - r) / (cnt - 2);
        int sum = ((G1 + G2) * 5 + 5) / 10;
        printf("%d\n", sum);
    }
    return 0;
}