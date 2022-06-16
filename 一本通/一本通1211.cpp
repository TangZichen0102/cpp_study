#include <bits/stdc++.h>
using namespace std;
int k;
bool f(int n)
{
    bool flag = false;
    if (n == k) return true;
    if (n < k) return 0;
    if ((n - 1) % 2 == 0) flag = flag || f((n - 1) / 2);
    if (flag) return flag;
    if ((n - 1) % 3 == 0) flag = flag || f((n - 1) / 3);
    return flag;
}
int main()
{
    int x;
    scanf("%d,%d", &k, &x);
    if (f(x)) cout << "YES";
    else cout << "NO";
    return 0;
}