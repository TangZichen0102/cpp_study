#include <bits/stdc++.h>

using namespace std;
int vis[1000100], a[1000100], n;
int last;
struct node {
    int d, step;
};
int bfs() {
    queue<node> q;
    vis[0] = 1;
    q.push({0, 0});
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        if (cur.d + a[cur.d] >= n)
            return cur.step + 1;
        if (!vis[cur.d + a[cur.d]])
        {
            vis[cur.d + a[cur.d]] = 1;
            q.push({cur.d + a[cur.d], cur.step + 1});
        }
        for (int i = last; i < cur.d; i++)
        {
            if (vis[i])
                continue;
            vis[i] = 1;
            q.push({i, cur.step + 1});
        }
        last = max(last, cur.d + 1);
    }
    return 0;
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << bfs();
    return 0;
}