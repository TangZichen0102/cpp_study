/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;

unordered_map<string, int> dp;

int main()
{

    LL sum = 1;
    for (int i = 0; i <= 62; i++)
    {
        dp[to_string(sum)] = 1;
        sum *= 2;
    }

    // for (auto i : dp)
    // {
    //     cout << i.first << endl;
    // }

    string n = "223372036854775807";

    vector<int> v;
    for (int i = 0; i < n.size(); i++)
    {
        v.push_back(i);
    }

    int cnt = 0;
    do
    {
        string s;
        for (auto i : v)
        {
            s += n[i];
        }
        if (dp[s])
            cout << s << " YES" << endl;
        cnt++;
    } while (next_permutation(v.begin(), v.end()));
    // cout << cnt;
    return 0;
}
/*
样例及推导

*/