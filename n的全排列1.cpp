#include <bits/stdc++.h>

using namespace std;
int a[10], vis[10];
int total, n;

int search(int step) {
    if (step == n + 1) {
        total++;
        for (int j = 1; j <= n; j++) cout << a[j] << " ";
        cout << endl;
    } else {
        for (int i = 1; i <= n; i++)
            if (vis[i] == 0) {
                a[step] = i;
                vis[i] = 1;
                search(step + 1);
                vis[i] = 0;
            }
    }
    return 0;
}

int main() {
    cin >> n;
    search(1);
    cout << total;
    return 0;
}
