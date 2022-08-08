#include <bits/stdc++.h>

using namespace std;
struct node {
    int pre, next;
} nodes[200005];
void insert_left(int s, int i) {
    nodes[nodes[s].pre].next = i;
    nodes[i].pre = nodes[s].pre;
    nodes[i].next = s;
    nodes[s].pre = i;
}
void insert_right(int s, int i) {
    nodes[nodes[s].next].pre = i;
    nodes[i].next = nodes[s].next;
    nodes[i].pre = s;
    nodes[s].next = i;
}
void Pop(int s) {
    nodes[nodes[s].pre].next = nodes[s].next;
    nodes[nodes[s].next].pre = nodes[s].pre;
    nodes[s].pre = -1;
    nodes[s].next = -1;
}
int n, m, s, p;
int main() {
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n;
    nodes[1] = {0, 0};
    for (int i = 2; i <= n; i++) {
        cin >> s >> p;
        if (p == 0) insert_left(s, i);
        else insert_right(s, i);
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> s;
        if (nodes[s].pre == -1 && nodes[s].next == -1) continue;
        Pop(s);
    }
    for (int i = 1; i <= n; i++)
        if (nodes[i].pre == 0) {
            s = i;
            break;
        }
    while(s > 0) {
        cout << s << " ";
        s = nodes[s].next;
    }
    return 0;
}