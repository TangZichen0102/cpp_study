#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;

int qmi(int a, int b, int p)
{
    int res = 1 % p;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = (LL)a * a % p;
        b >>= 1;
    }
    return res % p;
}

vector<int> ans;
void init235(int n)
{
    int num = 2, cnt = 0;
    while (1)
    {
        int t = num;
        while (t % 2 == 0 || t % 3 == 0 || t % 5 == 0)
        {
            if (t % 5 == 0)
                t /= 5;
            if (t % 3 == 0)
                t /= 3;
            if (t % 2 == 0)
                t /= 2;
        }
        if (t == 1)
        {
            // cout << "push"<<num<<endl;
            ans.push_back(num);
            cnt++;
        }
        num++;
        if (cnt == n)
            break;
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;

    init235(n);

    cout << ans[n-1];

    return 0;
}