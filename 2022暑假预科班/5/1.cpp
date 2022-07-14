#include <bits/stdc++.h>

using namespace std;
bool a[501][501], b[501][501], c[501][501];
int _x, _y, _z, n;
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> _x >> _y >> _z >> n;
    for(int i = 0; i < n; i++) {
        int _x, _y, _z;
        cin >> _x >> _y >> _z;
        a[_x][_y] = true;
        b[_y][_z] = true;
        c[_x][_z] = true;
    }
    for (int y = _y; y > 0; y--) {
        for (int x = 1; x <= _x; x++) {
            bool flag = false;
            for (int i = 1; i <= _z; i++)
                if (a[x][y] == true) {
                    flag = true;
                    break;
                }
            if(flag) cout << 'x';
            else cout << '.';
        }
        cout << " ";
        for (int z = 1; z <= _z; z++) {
            bool flag = false;
            for (int i = 1; i <= _x; i++)
                if (a[y][z] == true) {
                    flag = true;
                    break;
                }
            if(flag) cout << 'x';
            else cout << '.';
        }
        cout << endl;
    }
    cout << endl;
    for (int z = 1; z <= _z; z++) {
        for (int x = 1; x <= _x; x++) {
            bool flag = false;
            for (int i = 1; i <= _y; i++)
                if (a[x][z] == true) {
                    flag = true;
                    break;
                }
            if(flag) cout << 'x';
            else cout << '.';
        }
        cout << endl;
    }
    return 0;
}