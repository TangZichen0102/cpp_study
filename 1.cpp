#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, sum;
const int MAXN = 1e5 + 10;
int a[MAXN];
LL maxn;
LL idx;
unordered_map<int, int> um;
void fun(int n, int m) {
    for(int i = n; i <= m; i++) {
        int a1 = i;
        while(a1) {
            int t = a1 % 10;
            // cout << a1 << " ";
            um[t]++;
            a1 /= 10;
        }
    }
}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    fun(n, m);
    for(auto i:um) {
        if(i.second > maxn) {
            maxn = i.second;
            idx = i.first;
        }
    }
    cout << idx;
    return 0;
}