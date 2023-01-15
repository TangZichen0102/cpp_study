#include <bits/stdc++.h>

using namespace std;
int pos[10005][6];
int a[100005];
bool cmp(int x, int y) {
    int left = 0;
    for (int i = 1; i <= 5; i++)
        if (pos[x][i] < pos[y][i]) left++;
    return left >= 3;
}

int main() {
    int n;
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++) a[i] = i;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &x);
            pos[x][i] = j;
        }
    sort(a + 1, a + n, cmp);
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}
