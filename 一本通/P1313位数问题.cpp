#include <bits/stdc++.h>
using namespace std;
int n;
int dp[1005][2];
int main() {
    cin >> n;
    //0 1 2 4 5 6 7 8 9
    dp[1][0] = 9;
    //3
    dp[1][1] = 1;
    int _t = 9;
    for(int i = 2; i <= n; i++) {
        //最高位不能选0
        if(i == n) _t = 8;
        //前i位偶数的个数等于前i-1位偶数的个数再加上前i-1位奇数的个数
        dp[i][0] = (dp[i - 1][0] * _t + dp[i - 1][1]) % 12345;
        //前i位奇数的个数等于前i-1位奇数的个数再加上前i-1位偶数的个数
        dp[i][1] = (dp[i - 1][1] * _t + dp[i - 1][0]) % 12345;
    }
    cout << dp[n][0];
    return 0;
}