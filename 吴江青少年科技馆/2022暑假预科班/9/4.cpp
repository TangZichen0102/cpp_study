#include <bits/stdc++.h>

using namespace std;
int maxn = INT_MIN;

int check(string source, string a)
{
    int sum = 1, step = a.size();
    for (int j = step; j <= source.size(); j += step)
    {
        if (source.find(a, j) == j)
        {
            sum++;
        }
        else
        {
            break;
        }
    }
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    string s;

    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        string a = s.substr(0, i + 1);
        if (check(s, a) > 1)
        {
            cout << check(s, a);
            break;
        }
    }
    return 0;
}