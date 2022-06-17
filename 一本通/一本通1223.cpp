#include <bits/stdc++.h>
using namespace std;
int a[1000005], i;
int main()
{
    for (i = 0;; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            break;
    }
    int k = 0; 
    while (i--)
    {
        int sum = 0, sum1 = 0, d, b;
        d = a[k];
        while (d)
        {
            if (d % 2 == 1)
                sum++;
            d = d / 2;
        }
        for (int z = a[k] + 1;; z++)
        {
            sum1 = 0;
            int z1 = z;
            while (z1)
            {
                if (z1 % 2 == 1)
                    sum1++;
                z1 = z1 / 2;
            }
            if (sum == sum1)
            {
                cout << z << endl;
                k++;
                break;
            }
        }
    }
    return 0;
}