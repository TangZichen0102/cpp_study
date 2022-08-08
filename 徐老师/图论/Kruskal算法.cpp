#include <bits/stdc++.h>

using namespace std;
int n, m, r = 0, ans = 0;
int v[10000001]; //�±�������Ǹ�����
struct edge {
    int u, v, w;
};
edge Edge[10000001], mst[10000001]; //mstΪ���ɵ���С������

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
    for (int i = 1; i <= m; i++) cin >> Edge[i].u >> Edge[i].v >> Edge[i].w; //����
    sort(Edge + 1, Edge + 1 + m, cmp); //���еı���С��������
    for (int i = 1; i <= m; i++)
        //��ѡ�������ߵ�������u, v����һ������
        if (Find(Edge[i].u) != Find(Edge[i].v)) {
            //�ܷŵı�++���������߱��浽mst[]
            r++;
            mst[r].u = Edge[i].u;
            mst[r].v = Edge[i].v;
            mst[r].w = Edge[i].w;
            //ans++�ܷ��µ�������w
            ans += Edge[i].w;
            //�����ߵ�uv���ŵ�һ�����ϣ���ͨ������
            Union(Edge[i].u, Edge[i].v);
        }
    if (r == n - 1) cout << ans;
    else cout << "orz";
    return 0;
}
