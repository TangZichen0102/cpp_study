#include <bits/stdc++.h>

using namespace std;
int y, m, d;
int x;
int main() {
    cin >> y >> m >> d;
    x = ((y - 2000) * 360 + (m - 1) * 30 + d - 1) % 7 + 1;
    for(int i = d + 1; ; i++) {
        x++;
        if(x > 7) x = 1;
        if(i > 30) i = 1, m++;
        if(m > 12) y++, i = 1, m = 1;
        if((x == 7 || x == 6) && i == 1) {
            cout << y << ' ' << m << ' ' << i << endl;
            return 0;
        }
    }
    return 0;
}