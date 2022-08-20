#include <bits/stdc++.h>

using namespace std;
struct node {
    int x, y, pre;
};
int a[1005][1005], h, l;
int d[4][2] = {0, 1, 0, -1, 1, 0, -1, 0}, temp[1005][1005];
template <class T>
void read(T &r) {
        r = 0; char c = getchar(); bool f = false;
        while (c < 48 || c > 57) { if (c == 45) f ^= 1; c = getchar(); }
        while (c >= 48 && c <= 57) { r = 10*r + c - 48; c = getchar();}
        if (f) r = -r;
}
void BFS(int xt, int yt, int xl, int yl)
{
    queue<node> it;
    memset(temp, 0, sizeof(temp));
    if (a[xt][yt] == 0 || a[xl][yl] == 0)
    {
        printf("NO\n");
        return;
    }
    else if (xt == xl && yt == yl)
    {
        printf("NO\n");
        return;
    }
    else if (a[xt][yt] != a[xl][yl])
    {
        printf("NO\n");
        return;
    }
    node o, e;
    e.x = xt;
    e.y = yt;
    e.pre = 0;
    it.push(e);
    temp[e.x][e.y] = 1;
    while (!it.empty())
    {
        e = it.front();
        if (e.pre > 2)
            break;
        it.pop();
        for (int i = 0; i < 4; i++)
        {
            o.x = e.x + d[i][0];
            o.y = e.y + d[i][1];
            o.pre = e.pre + 1;
            while (1)
            {
                if (o.x == xl && o.y == yl)
                {
                    printf("YES\n");
                    return;
                }
                if (a[o.x][o.y] != 0 || o.x < 1 || o.x > h || o.y < 1 || o.y > l)
                    break;
                if (!temp[o.x][o.y])
                {
                    it.push(o);
                    temp[o.x][o.y] = 1;
                }
                o.x += d[i][0];
                o.y += d[i][1];
            }
        }
    }
    printf("NO\n");
}
int main()
{
    int n, xq, yq, xz, yz;
    cin >> h >> l;
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= l; j++) read(a[i][j]);
    read(n);
    while (n--) {
        read(xq);
        read(yq);
        read(xz);
        read(yz);
        BFS(xq, yq, xz, yz);
    }
    return 0;
}