#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[2000005];
int main() {    
    cin >> n >> m;
    for(int i = 0; i < n + m + 1; i++) cin >> a[i];
    sort(a, a + n + m + 1, greater<int>());
    int sum = 0;
    for(int i = 0; i < n + 1; i++) sum += a[i];
    for(int i = n + 1; i < n + m + 1; i++) sum -= a[i];
    cout << sum;
    return 0;
}