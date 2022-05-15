#include <bits/stdc++.h>

using namespace std;
int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, y, m, d;
set<string> ans;
int getFullYear(int n)
{
    return (n <= 59 ? n + 2000 : n + 1900);
}
bool isLeapYear(int n)
{
    n = getFullYear(n);
    return (n % 4 == 0 && n % 400 != 0) || (n % 400 == 0);
}
bool judge(int y, int m, int d)
{
    if (m > 12)
        return false;
    if (m == 2 && isLeapYear(y))
        return d > 0 && d <= 29;
    else
        return (d > 0 && d <= day[m]);
}
string build(int y, int m, int d)
{
    char buf[255];
    sprintf(buf, "%4d-%02d-%02d", getFullYear(y), m, d);
    return buf;
}
int main()
{
    scanf("%d/%d/%d", &y, &m, &d);
    if (judge(y, m, d)) ans.insert(build(y, m, d));
    if (judge(d, y, d)) ans.insert(build(d, y, m));
    if (judge(d, m, y)) ans.insert(build(d, m, y));
    for (auto &&i : ans)
        cout << i << endl;
    return 0;
}