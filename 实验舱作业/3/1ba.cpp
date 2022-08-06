#include <bits/stdc++.h>

using namespace std;

int n, l1, l2, r1, r2;
vector<int> a;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    cin >> n >> l1 >> r1 >> l2 >> r2;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    sort(a.begin() + l1 - 1, a.begin() + r1);

    sort(a.begin() + l2 - 1, a.begin() + r2, [](int x, int y)
         { return x > y; });

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*
6 1 3 2 4
8 3 1 6 9 2

1 3 8 6 9 2

1 8 6 3 9 2

*/