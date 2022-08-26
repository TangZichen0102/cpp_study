/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int n;

void exgcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return;
    }
    exgcd(b, a % b, y, x);
    y -= a / b * x;
}
int main()
{
    cin >> n;
    return 0;
}
/*
样例及推导

*/