#include <bits/stdc++.h>

using namespace std;
int n, m;
struct node
{
    int pre, next;
} nodes[500005];

void print(int a)
{
    cout << a << endl;
    for (int i = 1; i <= n; i++)
        printf("pre:%d nxt:%d\n", nodes[i].pre, nodes[i].next);
    puts("");

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        nodes[i] = {i - 1, i + 1};
    nodes[1].pre = nodes[n].next = -1;
    // for(int i = 1; i <= n; i++) {
    //     cout << i << ":" << nodes[i].pre << " " << nodes[i].next << endl;
    // }
    while (m--)
    {
        int a;
        scanf("%d", &a);
        cout << nodes[a].pre << " " << nodes[a].next << endl;
        if (nodes[a].next != -1)
            nodes[nodes[a].next].pre = nodes[a].pre;
        if (nodes[a].pre != -1)
            nodes[nodes[a].pre].next = nodes[a].next;

        if (nodes[a].pre == -1)
        {
            nodes[a].pre = nodes[a].next;
        }
        if (nodes[a].next == -1)
        {
            nodes[a].next = nodes[a].pre;
        }
        print(a);

    }
    return 0;
}