#include <bits/stdc++.h>

using namespace std;
int n;
double m;
struct node {
    int id, score;
} a[5010];
bool cmp(node x, node y) {
    if(x.score != y.score) x.score > y.score;
    return x.id < y.id;
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i].id >> a[i].score;
    int d = floor(m * 1.5);
    sort(a + 1, a + n + 1, cmp);
    cout << a[d].score << " " << d << endl;
    for(int i = 1; i <= d; i++) cout << a[i].id << " " << a[i].score << endl;
    return 0;
}