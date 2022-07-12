#include <bits/stdc++.h>

using namespace std;

unordered_map<int, vector<int>> a;

int b[11] = {0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 489};

void dfs(int x, int y)
{
    if (x > 10)
        return;
    if (y)
        for (auto s : a)
        {
            if (a[s.first].size())
                a[s.first + b[x]].push_back(x);
        }
    dfs(x + 1, 0);
    dfs(x + 1, 1);
}

int main()
{
    int n;

    dfs(1, 0);
    dfs(1, 1);

    cin >> n;

    for (auto s : a)
    {
        cout << s.first << endl;
        for (auto s : a[n])
        {
            cout << s << " ";
        }
        puts("");
    }

    if (a[n].size())
    {
        for (auto s : a[n])
        {
            cout << s << " ";
        }
    }

    return 0;
}