/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0)
#define _for(i, a, b) for (int i = (a); i < (b); ++i)
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define br puts("")

typedef long long LL;
int n, cnt;
int s[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int str(int l, int r)
{
    int t = 0;
    for (int i = l; i < r; i++)
        t = t * 10 + s[i];
    return t;
}
void fun() {
    int len = 9;
    for (int i = 1; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
        {
            int a = str(0, i), b = str(i, j), c = str(j, len);
            if (b % c != 0) continue;
            if (a + b / c == n) {
                printf("%d=%d+%d/%d\n", n, a, b, c);
                cnt++;
            }
        }
}
int main()
{
    cin >> n;
    do {
        fun();
    } while (next_permutation(s, s + 9));
    cout << cnt;
    return 0;
}
/*
样例及推导

*/