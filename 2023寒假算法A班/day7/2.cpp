#include <bits/stdc++.h>
using namespace std;
int n, a[2005], b[2005], cnt = 0, t = 0;
double f(int x1, int x2, int y1, int y2)
{
    return abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
        scanf("%d", &b[i]);
    for (int i = 1; i <= n; i++)
    {
        unordered_map<int, int> m;
        for (int j = 1; j <= n; j++)
            m[f(a[i], a[j], b[i], b[j])]++;
        for (auto &&j : m)
            cnt += j.second * (j.second - 1);
    }
    printf("%d", cnt);
    return 0;
}