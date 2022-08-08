#include <bits/stdc++.h>

int MAXN = 1e8;

using namespace std;
int main()
{
    for (int i = 0; i <= MAXN; i++)
    {
        for (int j = 0; j <= MAXN; j++)
        {
            if ((i + j) % 3 == 0 && min(i, j) >= (i + j) /3)
                cout << i << " " << j << endl;
        }
    }
    return 0;
}