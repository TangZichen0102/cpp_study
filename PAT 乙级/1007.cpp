#include <bits/stdc++.h>

using namespace std;
bool check(int x) {
    for(int i = 2; i <= x / i; i++) 
        if(x % i == 0) return false;
    return true;
}
int main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++)
        if(check(i) && check(i + 2)) ans++;
    cout << ans << endl;
    return 0;
}