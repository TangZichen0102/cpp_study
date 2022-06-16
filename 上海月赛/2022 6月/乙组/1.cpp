#include <bits/stdc++.h>

using namespace std;
int n, t;
int a[5005];
int sum = 0;
int dfs(int t, int A) {
    int ans = 0;
        if(i != A) {
            ans += a[i];
            if(ans == t) sum++;
            dfs(i, A);
        }
    return sum;
}
int main() {
    cin >> n >> t;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++)
        cout << dfs(t, i) << endl;
    return 0;
}