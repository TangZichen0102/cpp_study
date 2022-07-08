#include <bits/stdc++.h>

using namespace std;

int sum = 0, sum2 = 0;

char a[9];
int dir[8][3] = {
    {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

int s[26];
int d[26][26];

void fun()
{
    for (int i = 0; i < 8; i++)
    {
        set<int> dp;
        for (int j = 0; j < 3; j++)
            dp.insert(a[dir[i][j]] - 'A');

        // for (auto ddd : dp)
        // {
        //     cout << ddd << " ";
        // }
        // cout << endl;

        if (dp.size() == 1)
        {
            s[*dp.begin()] = 1;
        }

        if (dp.size() == 2)
        {
            vector<int> _dp(dp.begin(),dp.end());

            // _dp.assign(dp.begin(),dp.end());

            d[_dp[0]][_dp[1]] = 1;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif

    for (int i = 0; i < 9; i++)
        cin >> a[i];

    fun();

    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (s[i])
            sum++;
    }
    cout << sum << endl;

    sum = 0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (d[i][j])
                sum++;
        }
    }
    cout << sum << endl;

    return 0;
}