#include <bits/stdc++.h>

using namespace std;
vector<int> v[10005];
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < v[i].size(); j++) cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
