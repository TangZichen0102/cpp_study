#include <bits/stdc++.h>

using namespace std;
long long n, a[100005], sum;
bool is_arithmetic_sequence(int lift, int right) {
    int flag = 0;
    int d = a[lift + 1] - a[lift];
    for(int i = lift + 2; i <= right; i++)
        if(a[i] - a[i - 1] != d) return false;
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 3; j <= n - i + 1; j++)
            if(is_arithmetic_sequence(i, i + j - 1)) sum++;
            else break;
    }
    cout << sum;
    return 0;
}