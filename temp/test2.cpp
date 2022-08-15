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
        string a = to_string(sum);
        sort(a.begin(), a.end());
        dp[a] = 1;
        sum *= 2;
    }

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << (dp[s] ? "YES" : "NO") << endl;
    }

    return 0;
}
/*
样例及推导

*/