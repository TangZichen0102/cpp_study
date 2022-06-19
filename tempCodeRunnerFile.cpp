#include <bits/stdc++.h>

using namespace std;
struct node {
    string name;
    int r;
}a[1005];
int n;
int cmp(node a, node b) {
    if(a.name != b.name) return a.name < b.name;
    else return a.r > b.r;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i].name >> a[i].r;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) {
        cout << a[i].name << " ";
        printf("%d %.1f %.1f\n", a[i].r, 2 * 3.14 * a[i].r, 3.14 * a[i].r * a[i].r);

    }
    return 0;
}