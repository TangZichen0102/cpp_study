#include <bits/stdc++.h>

using namespace std;
int n, m;
int v[500005];

int main()
{
#ifndef ONLINE_JUDGE
   freopen("3.in", "r", stdin);
#endif
    cin >> n >> m;
    v[0] = -1, v[n + 1] = -1;
    for (int i = 1; i <= n; i++)
        v[i] = 1;

    //    for (int i = 0; i <= n + 1; i++)
    //        cout << v[i] << " ";

    while (m--)
    {
        int a;
        cin >> a;

        int i = 1, cnt = 0, pre = -1, next = -1;
        while (true)
        {
            if (v[i] == 1)
            {
                cnt++;
                if (cnt == a - 1)
                {
                    pre = i;
                }
                if (cnt == a)
                {
                    v[i] = 0;
                    n--;
                }
                if (cnt == a + 1)
                {
                    next = i;
                    break;
                }
                if (cnt > n)
                {
                    break;
                }
            }
            i++;
        }
        cout << pre << " " << next << endl;
    }

    return 0;
}
