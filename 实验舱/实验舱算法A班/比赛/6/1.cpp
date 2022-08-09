#include <bits/stdc++.h>

using namespace std;
long long n, s;
struct node {
    long long a, b, t;
}nodes[100005];
bool cmp(node x, node y) {
    if(x.t != y.t) return x.t < y.t;
    return x.a < y.a;
}
int sum1, sum2;
int main() {
    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> nodes[i].a >> nodes[i].b >> nodes[i].t;
    sort(nodes, nodes + n, cmp);
    for(int i = 0; i < n; i++) {
        sum1 += nodes[i].t;
        nodes[i].a -= nodes[i].b * sum1;
        sum2 += nodes[i].a;
    }
    cout << sum2;
    return 0;
}