#include <bits/stdc++.h>

using namespace std;
long long n, ans;
vector<long long> v;
int main() {
    cin >> n;
    for(long long i = 0; i < n; i++) {
        long long _t;
        cin >> _t;
        v.push_back(_t);
    }
    sort(v.begin(), v.end(), greater<int> ());
    for(long long i = 0; i < v.size(); i++) {
        if(i % 3 != 2) ans += v[i];
    }
    cout << ans;
    return 0;
}