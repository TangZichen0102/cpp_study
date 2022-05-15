#include <bits/stdc++.h>

using namespace std;

struct DATA
{
    int y, m, d;
};

bool cmp(DATA d1, DATA d2)
{
    if (d1.y == d2.y)
    {
        if (d1.m == d2.m)
        {
            return d1.d < d2.d;
        }
        return d1.m < d2.m;
    }
    return d1.y < d2.y;
}

bool isL(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    vector<DATA> ans;

    int dp[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int a, b, c;

    int p[3] = {0, 1, 2};
    scanf("%d/%d/%d", &a, &b, &c);

    int year = a, month = b, day = c;
    if (month <= 12 && day <= dp[month])
    {
        ans.push_back({year, month, day});
    }

    year = c, month = a, day = b;
    if (month <= 12 && day <= dp[month])
    {
        ans.push_back({year, month, day});
    }

    year = c, month = b, day = a;
    if (month <= 12 && day <= dp[month])
    {
        ans.push_back({year, month, day});
    }

    sort(ans.begin(), ans.end(), cmp);

    for (int i = 0; i < ans.size(); ++i)
    {
        year = ans[i].y <= 59 ? 20 : 19;
        year = year * 100 + ans[i].y;
        month = ans[i].m;
        day = ans[i].d;

        if (!isL(year) && day == 29)
        {
            continue;
        }

        printf("%d-%02d-%02d\n", year, month, day);
    }

    return 0;
}