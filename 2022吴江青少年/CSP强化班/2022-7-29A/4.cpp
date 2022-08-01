#include <bits/stdc++.h>
using namespace std;

int c[10000005];
int t[100000005]; //记录余数出现步数的桶
int main()
{
    int a = 2, b = 7;
    cout << a / b << ".";
    int ys = a % b; //当前余数
    int step = 1;   //记录操作的步数
    int flag = 0;   //记录开始循环的步数
    while (ys > 0)
    {
        if (t[ys] == 0) //判断余数是否出现过
        {
            t[ys] = step;
            ys *= 10;
            c[step] = ys / b;
            ys %= b;
            step++;
        }
        else
        {
            flag = t[ys];
            break;
        }
    }

    for (int i = 1; i < step; i++)
    {
        if (i == flag)
            cout << "(";
        cout << c[i];
        if (flag > 0 && i == step - 1)
            cout << ")";
    }

    return 0;
}