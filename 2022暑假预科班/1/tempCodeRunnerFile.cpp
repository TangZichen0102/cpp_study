#include <bits/stdc++.h>

using namespace std;
int n, m, r, c;
int a[105][105], b[105][105];
int maxn = INT_MAX;
int x, y;
int sumb, suma;

void fun1(int i, int j)
{
    suma = 0;
    for (int k = i; k < i + r; k++)
    {
        for (int l = j; l < j + c; l++)
        {
            suma += abs(a[k][l] - b[k - i][l - j]);
            // cout << a[k][l] << " ";
        }
        // cout << endl;
    }
    // cout << suma << endl;
    if (suma < maxn)
    {
        maxn = suma;
        x = i;
        y = j;
    }
}

int main()
{
#