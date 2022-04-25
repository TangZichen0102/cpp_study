#include <bits/stdc++.h>

using namespace std;
int n, m, r = 0, ans = 0;
int v[10000001]; //下标点属于那个集合
struct edge {
    int u, v, w;
};
edge Edge[10000001], mst[10000001]; //mst为生成的最小生成树

bool cmp(edge a, edge b) {
    if (a.w < b.w) return true;
    else return false;
}

int Find(int x) {
    if (v[x] == x) return v[x];
    else return v[x] = Find(v[x]);
}

void Union(int U, int V) {
    int ru = Find(U);
    int rv = Find(V);
    if (ru != rv) v[rv] = v[ru];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) v[i] = i;
    for (int i = 1; i <= m; i++) cin >> Edge[i].u >> Edge[i].v >> Edge[i].w; //读边
    sort(Edge + 1, Edge + 1 + m, cmp); //所有的边由小到大排列
    for (int i = 1; i <= m; i++)
        //能选择这条边的条件是u, v不在一个集合
        if (Find(Edge[i].u) != Find(Edge[i].v)) {
            //能放的边++，把这条边保存到mst[]
            r++;
            mst[r].u = Edge[i].u;
            mst[r].v = Edge[i].v;
            mst[r].w = Edge[i].w;
            //ans++能放下的这条边w
            ans += Edge[i].w;
            //这条边的uv，放到一个集合（连通分量）
            Union(Edge[i].u, Edge[i].v);
        }
    if (r == n - 1) cout << ans;
    else cout << "orz";
    return 0;
}
