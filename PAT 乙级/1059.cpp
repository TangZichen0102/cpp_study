#include <bits/stdc++.h>

using namespace std;
int a[10005];
int n, k, x;
bool check(int x) {
    for(int i = 2; i <= x / i; i++) 
        if(x % i == 0) return false;
    return true;
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> x, a[x] = i;
    cin >> k;
    for(int i = 0; i < k; i++) {
        cin >> x;
        if(a[x] == 1) printf("%04d: Mystery Award\n", x), a[x] = -1;
        else if(check(a[x]) && a[x] > 0) printf("%04d: Minion\n", x), a[x] = -1;
        else if(a[x] == 0) printf("%04d: Are you kidding?\n", x);
        else if(a[x] > 0) printf("%04d: Chocolate\n", x), a[x] = -1;
        else if(a[x] == -1) printf("%04d: Checked\n", x);
    }
    return 0;
}