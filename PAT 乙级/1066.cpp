#include <bits/stdc++.h>

using namespace std;
int n, m, a, b, t;
int main() {
    scanf("%d %d %d %d %d", &n, &m, &a, &b, &t);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)  {
            int _t;
            scanf("%d", &_t);
            if(_t >= a && _t <= b) _t = t;
            if(j) cout << " ";
            printf("%03d", _t);
        }
        cout << endl;
    }
    return 0;
}