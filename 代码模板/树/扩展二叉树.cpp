#include <bits/stdc++.h>

using namespace std;

struct node {
    int lc, rc;
    char data;

    node() {
        lc = rc = 0;
    }
};

node tr[1000];

void PostOrder(int k) {
    if (tr[k].lc != 0) PostOrder(tr[k].lc);
    if (tr[k].rc != 0) PostOrder(tr[k].rc);
    if (tr[k].data != '.') cout << tr[k].data;
}

string a;
int i = -1;

void Build(int k) {
    i++;
    if (i > a.size() - 1) return;
    if (a[i] == '.') {
        tr[k].data = '.';
        return;
    } else {
        tr[k].data = a[i];
        tr[k].lc = 2 * k;
        tr[k].rc = 2 * k + 1;
        Build(2 * k);
        Build(2 * k + 1);
    }
}

int main() {
    cin >> a;
    Build(1);
    PostOrder(1);
    return 0;
}
