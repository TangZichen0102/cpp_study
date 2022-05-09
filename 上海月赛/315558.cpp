#include <bits/stdc++.h>

using namespace std;
int n;
int xMax = INT_MIN, xd = INT_MIN, yu = INT_MAX, yd = INT_MIN;
struct node
{
    int x, y;
    bool flag = 0;
} a[100001];
int main()
{
    int maxx = -100001;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y;
        xMax = max(xMax, a[i].x);
        xd = min(xd, a[i].x);
        yu = max(yu, a[i].y);
        yd = min(yd, a[i].y);
    }
    for (int i = 0; i < n; i++)
        if (a[i].x == xMax || a[i].x == xd || a[i].y == yu || a[i].y == yd)
            a[i].flag = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i].flag && a[j].flag && i != j)
            {
                int d = abs(a[i].x - a[j].x) + (a[i].y - a[j].y);
                maxx = max(maxx, d);
            }
    cout << maxx;
    return 0;
}