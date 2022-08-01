#include <bits/stdc++.h>

using namespace std;
// #define K 1000

struct BigInt
{
    int num[10000], n;
};
int Cmp(BigInt &x1, BigInt &x2)
{
    if (x1.n > x2.n) return 1;
    if (x1.n < x2.n) return -1;
    for (int i = x1.n - 1; i >= 0; i--)
        if (x1.num[i] != x2.num[i]) return x1.num[i] - x2.num[i];
    return 0;
}
void Output(BigInt &x)
{
    int i;
    int flag = 0;
    for (i = x.n - 1; i >= 0; i--)
    {
        bool cnt = (x.num[i] == 0 ? true : false);
        if (flag == 0 && cnt)
            continue;
        else if (flag == 0 && !cnt)
            flag = 1;
        cout << x.num[i];
    }
}
void Init(string &s, BigInt &x)
{
    x.n = s.length();
    for (int i = 0; i < x.n; i++)
        x.num[i] = s[x.n - i - 1] - '0';
}

int Div(BigInt &x1, int y, BigInt &x2)
{
    int r = 0;
    for (int i = x1.n - 1; i >= 0; i--)
    {
        r = r * 10 + x1.num[i];
        x2.num[i] = r / y;
        r = r % y;
    }
    x2.n = x1.n;
    int cnt = 0;
    return r;
}

int main()
{
    string s1;
    int s2;
    cin >> s1 >> s2;
    BigInt x1, x2;
    string _t = to_string(s2);
    Init(s1, x1);
    Init(_t, x2);
    // cout << Cmp(x1, x2) << endl;
    if(Cmp(x1, x2) < 0) {
        cout << 0 << " " << s1;
        return 0;
    }
    BigInt x3;
    int r = Div(x1, s2, x3);
    Output(x3);
    cout << " " << r << endl;
    return 0;
}