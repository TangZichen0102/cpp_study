/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
int a[2000010];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    scanf("%d", &n);
    for(int i = 0; i < 2 * n; i++) scanf("%d", &a[i]);
    sort(a, a + 2 * n);
    cout << a[n - 1];  
   return 0;
}
/*
样例及推导

*/