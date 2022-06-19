#include <bits/stdc++.h>

using namespace std;
int m[55];
unordered_map<int, set<int, greater<int>>> m2;
int n;
int maxn = -1;
int idx;
int cmp(int a, int b)
{
    return a > b;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int _t;
        cin >> _t;
        int sum = 0;
        string s = to_string(_t);
        for (int i = 0; i < s.size(); i++)
            sum += s[i] - '0';
        // cout << _t << ':' << sum << endl;
        m[sum]++;
        m2[sum].insert(_t);
    }
    for(int i = 0; i < 55; i++) 
        if(m[i] > maxn) {
            maxn = m[i];
            idx = i;
        }
    
    cout << idx << endl;
    for (auto aa : m2[idx]) cout << aa << " ";
    return 0;
}