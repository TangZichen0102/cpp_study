/*
题目来源
2962奶牛排队
https://oj.shiyancang.cn/Contest/Problem/2962.html?index=2&cid=5174&type=4
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
string cow[8] = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
string c1[7], c2[7];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif

    cin >> n;
    sort(cow, cow + 8);
    for (int i = 0; i < n; ++i)
    {
        string t;
        cin >> c1[i] >> t >> t >> t >> t >> c2[i];
    }
    do
    {
        bool flag = 0;
        for (int i = 0; i < n; ++i)
        {
            int l, r;
            for (int j = 0; j < 8; ++j)
            {
                if (c1[i] == cow[j])
                    l = j;
                if (c2[i] == cow[j])
                    r = j;
            }
            if (abs(l - r) != 1)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            for (int i = 0; i < 8; i++)
                cout << cow[i] << endl;
            return 0;
        }
    } while (next_permutation(cow, cow + 8));
    return 0;
}

/*
样例及推导

*/