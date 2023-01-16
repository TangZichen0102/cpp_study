#include <bits/stdc++.h>

using namespace std;
long long n, s, sum, sumtime;
struct node {
    long long a, b, t;
}nodes[100005];
bool cmp(node x, node y) {
    if(x.t != y.t) return x.t < y.t;
    else {
        if(x.b != y.b) return x.b > y.b;
        else return x.a > y.a;
    }
}
int main() {
    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> nodes[i].a >> nodes[i].b >> nodes[i].t;
    sort(nodes, nodes + n, cmp);
    for(int i = 0; i < n; i++) {
        sumtime += nodes[i].t;
        sum += nodes[i].a - sumtime * nodes[i].b;
    }
    cout << sum;
    return 0;
}