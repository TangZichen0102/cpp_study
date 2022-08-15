#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
struct node {
    ll x;
    ll sum[11]{0};
} ans[64];
ll T, n, num, x = 1, k[11]{0};
bool b1;
void hit_list()
{
    for (int i = 1; i <= 62; i++)
    {
        ans[i].x = x;
        num = ans[i].x;
        while (num > 0)
        {
            ans[i].sum[num % 10]++;
            num /= 10;
        }
        x *= 2;
    }
}
int main()
{
    hit_list();
    scanf("%lld", &T);
    while (T--)
    {
        scanf("%lld", &n);
        num = n;
        memset(k, 0, sizeof k);
        while (num > 0)
        {
            k[num % 10]++;
            num /= 10;
        }
        /*for(int i = 0;i <= 9;i++)
        {
            cout<<k[i]<<' ';
        }
        cout<<endl;*/
        for (int i = 1; i <= 62; i++)
        {
            b1 = true;
            for (int j = 0; j <= 9; j++)
            {
                // cout<<ans[i].sum[j]<<' '<<ans[i].x<<' '<<k[j]<<endl;
                if (k[j] != ans[i].sum[j])
                {
                    b1 = false;
                }
            }
            if (b1 == true)
            {
                puts("Yes");
                break;
            }
        }
        if (b1 == false)
        {
            puts("No");
        }
    }
    return 0;
}