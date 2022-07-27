#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
struct POINT {
    int address, data, next, pre;
} nodes[MAXN];
void print(int head, int tail) {
    int count = 0;
    auto p = head, q = tail;
    vector<POINT> res;
    while(p != -1) {
        res.push_back(nodes[p]);
        p = nodes[p].next;
        count++;
        if(count % 2 == 0 && q != -1) {
            res.push_back(nodes[q]);
            q = nodes[q].pre;
        }
    }
    int n = res.size();
    for(int i = 0; i < n; i++) 
    {
        printf("%05d %d", res[i].address, res[i].data);
        if(i == n - 1) printf(" -1");
        else printf(" %05d\n", res[i + 1].address);
    }
}
int main() {
    int h1, h2, n;
    cin >> h1 >> h2 >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        nodes[a] = {a, b, c};
    }
    int len1 = 0;
    auto p = h1;
    auto pre = -1;
    while(p != -1) {
        len1++;
        nodes[p].pre = pre;
        pre = p;
        p = nodes[p].next;
    }
    auto q = h2;
    auto pre2 = -1;
    int len2 = 0;
    while(q != -1) {
        len2++;
        nodes[q].pre = pre2;
        pre2 = q;
        q = nodes[q].next;
    }
    if(len1 > len2) print(h1, pre2);
    else print(h2, pre);
    return 0;
}