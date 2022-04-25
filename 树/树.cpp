#include <bits/stdc++.h>

using namespace std;
int postorder[10001], inorder[10001];
int lch[1001], rch[1001];
int n = 0;
int minsum = 0, minv = 0;

int createtree(int l1, int l2, int m) {
    if (m <= 0) return 0;
    int root = postorder[l2 + m - 1];
    int len = 0;
    while (inorder[l1 + len] != root) len++;
    lch[root] = createtree(l1, l2, len);
    rch[root] = createtree(l1 + len + 1, l2 + len, m - len - 1);
    return root;
}

bool readline(int *a) {
    string line;
    if (!getline(cin, line)) return false;
    stringstream s(line);
    n = 0;
    int x;
    while (s >> x) a[n++] = x;
    return n > 0;
}

void findmin(int v, int sum) {
    sum += v;
    if (!lch[v] && !rch[v])
        if (sum < minsum || (sum == minsum && v < minv)) {
            minv = v;
            minsum = sum;
        }
    if (lch[v]) findmin(lch[v], sum);
    if (rch[v]) findmin(rch[v], sum);
}

int main() {
    while (readline(inorder)) {
        readline(postorder);
        createtree(0, 0, n);
        minsum = 0x7fffffff;
        findmin(postorder[n - 1], 0);
        cout << minv << " ";
    }
    return 0;
}

/*
  ----|| 3 2 1 4 5 7 6
3 1 2 5 6 7 4
7 8 11 3 5 16 12 18
8 3 11 7 16 18 12 5
255
255
*/
