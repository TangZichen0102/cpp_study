#include<bits/stdc++.h>

using namespace std;
int xx[6] = {-1, 1, 0, 0, 0, 0};
int yy[6] = {0, 0, -1, 1, 0, 0};
int zz[6] = {0, 0, 0, 0, -1, 1};
int h[100001][5];
bool a[101][101][101];

int main() {
    int l, r, c, t, w, x, y, z, fx, fy, fz;
    char ch;
    bool s;
    while (cin >> l >> r >> c) {
        if (l == 0 && r == 0 && c == 0) return 0;
        for (x = 1; x <= l; x++)
            for (y = 1; y <= r; y++)
                for (z = 1; z <= c; z++) {
                    cin >> ch;
                    if (ch == 'S') {
                        a[x][y][z] = false;
                        h[1][1] = x;
                        h[1][2] = y;
                        h[1][3] = z;
                        h[1][4] = 0;
                    } else if (ch == 'E') {
                        a[x][y][z] = true;
                        fx = x;
                        fy = y;
                        fz = z;
                    } else if (ch == '#') a[x][y][z] = false;
                    else a[x][y][z] = true;
                }
        t = 0;
        w = 1;
        s = false;
        do {
            t++;
            for (int i = 0; i < 6; i++) {
                x = h[t][1] + xx[i];
                y = h[t][2] + yy[i];
                z = h[t][3] = zz[i];
                if (x > 0 && x <= 1 && y > 0 && y <= r && z > 0 && z <= c && a[x][y][z]) {
                    a[x][y][z] = false;
                    w++;
                    h[w][1] = x;
                    h[w][2] = y;
                    h[w][3] = z;
                    h[w][4] = h[t][4] + 1;
                    if (x == fx && y == fy && z == fz) {
                        cout << "Escaped in" << h[w][4] << "minute(s)." << endl;
                        s = true;
                        break;
                    }
                }
            }
        } while (t < w && s == false);
        if (s == false) cout << "Trapped!" << endl;
    }
    return 0;
}
