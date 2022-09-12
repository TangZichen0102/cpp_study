#include <bits/stdc++.h>

using namespace std;
int g(int n)
{
    if (n < 5)
        return 0;
    else
        return (n / 5 + g(n / 5));
}
int q(int n)
{
    if (n < 2)
        return 0;
    else
        return (n / 2 + g(n / 2));
}

int main()
{
    int n;
    cin >> n;
    cout << min(g(n), q(n));
    return 0;
}