#include <bits/stdc++.h>

using namespace std;
double sum = 0;
double a[15];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("tongji.in", "r", stdin);
#endif
    int n = 15;
    puts("");
    for (int i = 0; i < 15; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 15; i++)
    {
        sum += a[i];
    }
    printf("%.2lf", sum / 60);
    return 0;
}