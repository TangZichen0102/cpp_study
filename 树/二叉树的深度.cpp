#include <bits/stdc++.h>

using namespace std;
struct node {
    int level;
    int lchild, rchild; //��������������
};
node tree[1000001];
queue<node> q;

int main() {
    int n, tl, tr, r = 1;
    cin >> n;

    //����
    for (int i = 1; i <= n; i++) {
        cin >> tl >> tr;
        tree[i].lchild = tl;
        tree[i].rchild = tr;
    }
    tree[1].level = 1;

    //���ѱ���
    q.push(tree[1]);
    while (!q.empty()) {
        node tmp = q.front();
        if (tmp.lchild != 0) {
            tree[tmp.lchild].level = tmp.level + 1; //�������Ĳ�ε��ڸ��׵Ĳ��+1
            q.push(tree[tmp.lchild]); //������ѹ�����
            r = max(r, tmp.level + 1); //Ѱ�����Ĳ��
        }
        if (tmp.rchild != 0) {
            tree[tmp.rchild].level = tmp.level + 1; //�������Ĳ�ε��ڸ��׵Ĳ��+1
            q.push(tree[tmp.rchild]); //������ѹ�����
            r = max(r, tmp.level + 1); //Ѱ�����Ĳ��
        }
        q.pop();
    }
    cout << r;
    return 0;
}
