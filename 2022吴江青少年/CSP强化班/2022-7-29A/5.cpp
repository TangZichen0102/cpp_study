#include <bits/stdc++.h>
using namespace std;
int tl(int x, int y) //为X后面添Y个零
{
    while (y--)
            x *= 10;
    return x;
}
int initNine(int n) //返回N个9
{
    int res = 0;
    while (n--)
        res = res * 10 + 9;
    return res;
}

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    freopen("5.in", "r", stdin);
    int a1 = 0, a2 = 0, a3 = 0, a, b;
    string s, s2, s3;
    scanf("%d.", &a1);
    cin >> s;
    int start = s.find("(");
    if (~start)
    {
        s2 = s.substr(0, start);
        int end = s.find(")");
        s3 = s.substr(start + 1, end - start - 1);
        a2 = atoi(s2.c_str());
        a3 = atoi(s3.c_str());
    }
    else
        a2 = atoi(s.c_str());

    if (a3 > 0) //有循环节
    {
        a = tl(a2, s3.size()) + a3 - a2;
        b = tl(initNine(s3.size()), s2.size()) - a2;
    }
    else //无循环
    {
        a = a2;
        b = tl(1, s2.size() + 1);
    }
    int g = gcd(a, b);
    cout << a / g << "/" << b / g << endl;
    return 0;
}