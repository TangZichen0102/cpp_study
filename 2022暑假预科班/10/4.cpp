#include <bits/stdc++.h>

using namespace std;
int n;
unordered_map<string, int> m;
int sum;
int main()
{
#ifndef ONLIEN_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string _t;
        cin >> _t;
        m[_t]++;
    }
    int flag;
    do
    {
        flag = 0;
        if (m["cat"] >= 1)
        {
            flag = 1;
            sum += m["cat"];
            m["cat"] = 0;
        }

        if (m["c"] >= 1 && m["at"] >= 1)
        {
            flag = 1;
            int minN = min({m["c"], m["at"]});
            sum += minN;
            m["c"] -= minN, m["at"] -= minN;
        }
        if (m["ca"] >= 1 && m["t"] >= 1)
        {
            flag = 1;
            int minN = min({m["ca"], m["t"]});
            sum += minN, m["ca"] -= minN, m["t"] -= minN;
        }
        if (m["c"] >= 1 && m["a"] >= 1 && m["t"] >= 1)
        {
            flag = 1;
            int minN = min({m["c"], m["a"], m["t"]});
            sum += minN;
            m["c"] -= minN, m["a"] -= minN, m["t"] -= minN;
        }
    } while (flag == 1);
    cout << sum;
    return 0;
}