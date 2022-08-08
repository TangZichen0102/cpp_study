#include <bits/stdc++.h>

using namespace std;
struct node {
    int level;
    int lchild, rchild; //左子树和右子树
};
node tree[1000001];
queue<node> q;

int main() {
    int n, tl, tr, r = 1;
    cin >> n;

    //建树
    for (int i = 1; i <= n; i++) {
        cin >> tl >> tr;
        tree[i].lchild = tl;
        tree[i].rchild = tr;
    }
    tree[1].level = 1;

    //广搜遍历
    q.push(tree[1]);
    while (!q.empty()) {
        node tmp = q.front();
        if (tmp.lchild != 0) {
            tree[tmp.lchild].level = tmp.level + 1; //左子树的层次等于父亲的层次+1
            q.push(tree[tmp.lchild]); //左子树压入队列
            r = max(r, tmp.level + 1); //寻找最大的层次
        }
        if (tmp.rchild != 0) {
            tree[tmp.rchild].level = tmp.level + 1; //右子树的层次等于父亲的层次+1
            q.push(tree[tmp.rchild]); //右子树压入队列
            r = max(r, tmp.level + 1); //寻找最大的层次
        }
        q.pop();
    }
    cout << r;
    return 0;
}
