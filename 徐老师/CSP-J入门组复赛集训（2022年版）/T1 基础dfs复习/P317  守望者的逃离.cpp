/*
题目来源
http://182.254.140.138:8888/p/317
 #317. 守望者的逃离
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int M, S, T, t, dis;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("317.in", "r", stdin);
#endif
    cin >> M >> S >> T;
    int s1 = 0, s2 = 0; //分别记录2种方式的路程
    for (int i = 1; i <= T; i++)
    {
        s1 += 17;

        if (M >= 10)
            s2 += 60, M -= 10;
        else
            M += 4;

        //当前时间下,使用闪烁的跑得更快
        //就采用闪烁方案,所以上面会一边跑,一边回蓝分别进行
        if (s2 > s1)
            s1 = s2;

        if (s1 > S)
        {
            cout << "Yes" << endl;
            cout << i << endl;
            return 0;
        }
        }
    cout << "No" << endl;
    cout << s1 << endl;
    return 0;
}
/*
样例及推导

*/