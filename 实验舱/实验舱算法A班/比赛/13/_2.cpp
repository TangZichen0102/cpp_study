/*
题目来源
#B、小组队列
https://oj.shiyancang.cn/Contest/Problem/714.html?index=1&cid=5189&type=4

http://poj.org/problem?id=2259
Team Queue
题解
在任何时刻，同一个小组的人只要来到了队伍，就会站在一起，所以我们建立一个队列q0存储队伍中所有小组的编号，再为每个小组i建立一个队列qi存储队伍中这个小组的所有成员，一共n+1个队列。

当一个编号为X，组号为Y的人来到队伍时，我们直接把X插入到qY的队尾,。如果在插入之前qY是空的，则还要把Y插入到q0末尾，表明队伍最后出现了一个新的小组。

当接受出队指令时，我们通过q0得知排在最前边的小组组号为Y，然后再把qY的队头出队。出队后qY为空，就从q0开头删除Y，表明这个小组目前所有人都离开。

这道题是多组输入，如果队列定义的是全局变量，每次都要把队列清空，c++的queue没有清空队列的函数，需要自己手动清空。 或者定义成局部变量就不用清空了。
————————————————
版权声明：本文为CSDN博主「RioTian」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_45573560/article/details/107926463
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int id[2000010];
queue<int> Q, q[2010];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    int n, k = 0;
    while (1)
    {
        int m, x;
        Q = queue<int>(); //初始化
        cin >> n;
        if (!n)
            break;
        for (int i = 1; i <= n; ++i)
        {
            cin >> m;
            for (int j = 1; j <= m; ++j)
                cin >> x, id[x] = i;
            q[i] = queue<int>();
        }
        printf("Scenario #%d\n", ++k);
        string s;
        while (1)
        {
            cin >> s;
            if (s[0] == 'S')
                break;
            if (s[0] == 'E')
            {
                cin >> x;
                if (!q[id[x]].size())
                    Q.push(id[x]);
                q[id[x]].push(x);
            }
            else if (s[0] == 'D')
            {
                int idd = Q.front();
                printf("%d\n", q[idd].front());
                q[idd].pop();
                if (q[idd].empty())
                    Q.pop();
            }
        }
        printf("\n");
    }
    return 0;
}
/*
样例及推导

*/