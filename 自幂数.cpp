#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
LL qmi(int a, int b)
{
    LL res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a;
        a = a * (LL)a;
        b >>= 1;
    }
    return res;
}

void dfs(int deep, int curNum, LL curSum)
{
    if (deep > n)
    {
        if (curNum == curSum)
            cout << curNum << endl;
    }
    else
    {
        int firstNum = (deep == 1);
        for (int i = firstNum; i <= 9; i++)
        {
            dfs(deep + 1, curNum * 10 + i, curSum + qmi(i, n));
        }
    }
}

int main()
{
    cin >> n;
    dfs(1, 0, 0);
    return 0;
}