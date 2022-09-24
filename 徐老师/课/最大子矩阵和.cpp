#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int a[1000][1000], b[1000], dp[1000];
int n;

int sub_sum() {
    dp[1] = b[1];
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = max(dp[i - 1] + b[i], b[i]);
        sum = max(sum, dp[i]);
    }
    return sum;
}

int main() {
    int maxans;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    maxans = a[1][1];
    for (int i = 1; i <= n; i++) {
        memset(b, 0, sizeof(b)); //for(int i = 1; i <= 1000; i++) b[i] = 0;
        for (int j = i; j <= n; j++) {
            for (int k = 1; k <= n; k++)
                b[k] += a[j][k];
            int tmpsum = sub_sum();
            maxans = max(tmpsum, maxans);
        }
    }
    cout << maxans;
    return 0;
}
