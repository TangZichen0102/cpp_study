#include <bits/stdc++.h>

using namespace std;
int n, s;
int cnt1[150], cnt2[150];
int sum;
int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        int a;
        s = (s * 345) % 19997;
        a = 97 + (s % 26);
        cnt1[a]++;
    }
    for (int i = 1; i <= n; i++) {
        int b;
        s = (s * 345) % 19997;
        b = 97 + (s % 26);
        cnt2[b]++;
    }
    for(int i = 1; i <= 130; i++) {
        sum += abs(cnt1[i] - cnt2[i]);
        // cout << abs(cnt1[i] - cnt2[i]) << " ";
    }
    cout << sum / 2;
    return 0;
}