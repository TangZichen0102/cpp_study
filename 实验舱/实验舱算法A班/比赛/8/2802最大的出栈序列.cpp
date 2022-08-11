/*
题目来源

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
        scanf("%d", &m);
        a[i] = b[i] = m;
    }
    sort(b, b + n, greater<int>());
    printab();
    int i = 0, j = 0;
    for (; i < n; i++)
    {
        if (a[i] < b[j])
        {
            // printf("a[i]:%d  b[j]:%d\n", a[i], b[j]);
            st.push(a[i]);
        }
        else
        {
            printf("%d ", a[i]);
            j++;
            while (st.size() > 0 && st.top() >= b[j])
            {
                m = st.top();
                st.pop();
                printf("%d ", m);
                j++;
            }
        }
    }
    while (st.size())
    {
        m = st.top();
        st.pop();
        printf("%d ", m);
    }

    return 0;
}
/*
样例及推导

*/