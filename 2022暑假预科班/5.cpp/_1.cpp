#include <bits/stdc++.h>

using namespace std;

bool a[501][501][501];
int X, Z, Y, N;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif

    cin >> X >> Y >> Z >> N;

    while (N--)
    {
        int _x, _y, _z;
        cin >> _x >> _y >> _z;
        a[_x][_y][_z] = true;
    }

    for (int y = Y; y > 0; y--)
    {
        for (int x = 1; x <= X; x++)
        {
            bool flag = false;
            //主视图
            for (int i = 1; i <= Z; i++)
            {
                if (a[x][y][i] == true)
                {
                    flag = true;
                    break;
                }
            }
            cout << (flag ? "x" : ".");
        }

        cout << " ";

        for (int z = 1; z <= Z; z++)
        {
            bool flag = false;
            //左视图
            for (int i = 1; i <= X; i++)
            {
                if (a[i][y][z] == true)
                {
                    flag = true;
                    break;
                }
            }
            cout << (flag ? "x" : ".");
        }
        puts("");
    }
    puts("");
    // cout << endl;
    for (int z = 1; z <= Z; z++)
    {
        for (int x = 1; x <= X; x++)
        {
            bool flag = false;
            //左视图
            for (int i = 1; i <= Y; i++)
            {
                if (a[x][i][z] == true)
                {
                    flag = true;
                    break;
                }
            }
            cout << (flag ? "x" : ".");
        }
        cout << endl;
    }

    return 0;
}