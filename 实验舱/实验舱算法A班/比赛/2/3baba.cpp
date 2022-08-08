#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i <= n / 5; i++)
    {
        if ((n - 7 * i) % 4 == 0 && (n - 7 * i)>=0 && (3 * n+ 3 * i) % 4 == 0 && (3 * n+ 3 * i)>=0)
        {
            // cout << i << " " << (n - 7 * i) << " " << (3 * n + 3 * i) << endl;
            cnt++;
        }
    }
    if (!cnt)
        cout << "No Answer.";
    else
        cout << cnt;
    return 0;
}