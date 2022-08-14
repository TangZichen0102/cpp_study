#include <bits/stdc++.h>

using namespace std;
int n;
long long a[200010];
int premax = INT_MIN;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n;
    while (n--)
    {
        int t;
        scanf("%d", &t);
        memset(a, 0, sizeof(a));
        for (int j = 0; j < t; j++)
            scanf("%lld", a + j);
        string f;
        cin >> f;
        int pos = 0;
        while (pos < t)
        {
            int start = pos;
            while (pos < t && f[pos] == '1')
                pos++;
            if (start != pos)
            {
                sort(a + start, a + pos + 1);
                // printf("start:%d pos:%d \n", start, pos);
                // for (int k = 0; k < t; k++)
                //     cout << a[k] << " ";
                // puts("");
            }
            pos++;
        }

        cout << (is_sorted(a, a + t) ? "YES" : "NO") << endl;
        
    }
    return 0;
}