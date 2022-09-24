/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
int main()
{
#ifndef ONLINE_JUDGE
    // freopen(".in", "r", stdin);
#endif
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
            printf("2\n");
        else if (a == 2)
            printf("11\n");
        else
        {
            printf("1");
            string s(a - 2, '0');
            printf("%s", s.c_str());
            // cout << s;
            printf("1\n");
        }
    }
    return 0;
}
/*
样例及推导

*/