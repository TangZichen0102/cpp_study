#include <bits/stdc++.h>

using namespace std;
int h[1100], a[1100], b[1100], v[101][101];
int cont = 0, n = 8;

void print()
{
    cont++;
    cout << "No. " << cont << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}

void dfs(int row)
{
    if (row == n)
        print();
    else
        for (int col = 0; col < n; col++)
        {
            if (h[col] == 0 && a[row + col] == 0 && b[row - col + n] == 0)
            {
                a[row + col] = 1;
                b[row - col + n] = 1;
                h[col] = 1;
                v[row][col] = 1;
                dfs(row + 1);
                a[row + col] = 0;
                b[row - col + n] = 0;
                h[col] = 0;
                v[row][col] = 0;
            }
        }
}

int main() {
    dfs(0);
    return 0;
}