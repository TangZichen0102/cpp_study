#include <bits/stdc++.h>

using namespace std;
int n, m, k, tUid, tPid, ts;
struct node {
    long long uid, total = 0;
    unordered_map<int, int> m1;
    bool operator<(const node t) const
    {
        if (total == t.total)
            return uid < t.uid;
        return total > t.total;
    }
};
unordered_set<int> m3;
set<int> problem;
unordered_map<int, unordered_map<int, int> > m2;
vector<node> v;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &tUid);
        m3.insert(tUid);
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &tPid);
        problem.insert(tPid);
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d%d", &tUid, &tPid, &ts);
        if (m3.count(tUid) && problem.count(tPid)) m2[tUid][tPid] = ts;
    }
    for (auto i: m2) {
        node tmp;
        tmp.uid = i.first;
        for (auto p : i.second) {
            tmp.total += p.second;
            tmp.m1[p.first] = p.second;
        }
        v.push_back(tmp);
        m3.erase(i.first);
    }
    for (auto i : m3) v.push_back({i, INT_MIN});
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        printf("#%d %lld ", i + 1, v[i].uid);
        if (v[i].total != INT_MIN) printf("%lld ", v[i].total);
        else printf("\\ ");
        for (auto pid : problem)
            if (v[i].total != INT_MIN && v[i].m1.count(pid)) printf("%d ", v[i].m1[pid]);
            else printf("\\ ");
        puts("");
    }
    return 0;
}