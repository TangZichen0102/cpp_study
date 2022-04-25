#include <bits/stdc++.h>

using namespace std;
int n;
int tr[110];

void PreOrder(int k) {
    cout << tr[k] << " ";
    if (tr[2 * k] != -1 && 2 * k <= n) PreOrder(2 * k);
    if (tr[2 * k + 1] != -1 && 2 * k + 1 <= n) PreOrder(2 * k + 1);
}

void InOrder(int k) {
    if (tr[2 * k] != -1 && 2 * k <= n) InOrder(2 * k);
    cout << tr[k] << " ";
    if (tr[2 * k + 1] != -1 && 2 * k + 1 <= n) InOrder(2 * k + 1);
}

void PostOrder(int k) {
    if (tr[2 * k] != -1 && 2 * k <= n) PostOrder(2 * k);
    if (tr[2 * k + 1] != -1 && 2 * k + 1 <= n) PostOrder(2 * k + 1);
    cout << tr[k] << " ";
}

int main() {
    cin >> n;
    memset(tr, -1, sizeof(tr));
    for (int i = 1; i <= n; i++) cin >> tr[i];
    PreOrder(1);
    cout << endl;
    InOrder(1);
    cout << endl;
    PostOrder(1);
    return 0;
}
