#include <bits/stdc++.h>

using namespace std;
int a = 1, b = 2;
int n, flag, cnt = 1;
int main() {
// #ifndef ONLINE_JUDGE
//     freopen("2.in", "r", stdin);
// #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    if(n == 1) {
        cout << "1/1";
        return 0;
    }
    for(int i = 2; i <= n - 1; i++) {
        if(i != 2 && cnt == 1) {
            if(a == 1) {
                b++, flag = 0;
                cnt = 0;
                continue;
            }
            if(b == 1) {
                a++, flag = 1;
                cnt = 0;
                continue;
            }
        }
        cnt = 1;
        if(flag == 0) a++, b--;
        if(flag == 1) a--, b++;
    }
    cout << a << "/" << b;
    return 0;
}
