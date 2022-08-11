/*
题目来源
#2802、最大的出栈序列
https://oj.shiyancang.cn/Problem/2802.html
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int MAXN = 2e5 + 10;
LL n, m, sum;
int a[MAXN], b[MAXN];
stack<int> st;

void printab()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    puts("");
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    puts("");
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &m);
        a[i] = m;
    }

    int maxR = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        // cout << maxR<< " " << a[i] << endl;
        maxR = max(maxR, a[i]);
        b[i - 1] = maxR;
    }

    // printab();

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
        {
            printf("%d ", a[i]);
            while (1)
            {
                if (st.size() == 0)
                    break;

                // printf("\ni:%d top:%d\n", i, st.top());
                if (st.top() >= b[i])
                {
                    printf("%d ", st.top());
                    st.pop();
                }
                else
                    break;
            }
        }
        else
        {
            st.push(a[i]);
        }
    }

    // while (st.size())
    // {
    //     printf("||%d ", st.top());
    //     st.pop();
    // }

    return 0;
}
/*
样例及推导

*/