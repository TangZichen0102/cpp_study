#include<bits/stdc++.h>

using namespace std;
int n, x, sum, cnt;
int a[1000005];
int main() {
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    while(sum < x) {
        sum += a[cnt];
        cout << a[cnt] << endl;
        cnt++;
    }
    cout << cnt;
    return 0;
}
