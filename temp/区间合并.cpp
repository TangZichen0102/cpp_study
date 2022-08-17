#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
int n, m, a[N], s[N];
vector<int> v;
vector<pair<int, int> > v2, v3;
int find(int x) {
    int l = 0, r = v.size() - 1;
    while (l < r) {
        int mid = (l + r) >> 1;
        if (v[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x, c;
        cin >> x >> c;
        v2.push_back({x, c});
        v.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        v3.push_back({l, r});
        v.push_back(l);
        v.push_back(r);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (auto i:v2) {
        int x = find(i.first);
        a[x] += i.second;
    }
    for (int i = 1; i <= v.size(); i++) s[i] = s[i - 1] + a[i];
    for (auto i:v3) {
        int l = find(i.first), r = find(i.second);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}