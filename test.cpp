#include <bits/stdc++.h>

using namespace std;
int n, m, p, minn = INT_MAX;
int a[100005];
int main() {
    cin >> n >> m >> p;
    for(int i = 1; i <= p; i++) {
        int _t;
        cin >> _t;
        a[_t] = 1;
    } 
    for(int i = 1; i <= n - m + 1; i++) {
        int sum = 0;
        for(int j = i; j <= i + m- 1; j++)
            if(a[j] == 1) sum++;
        minn = min(minn, sum);
    }
    cout << minn;
    return 0;
}
