#include <bits/stdc++.h>

using namespace std;
vector<double> v;
int find(double x)
{
    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (v[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    return r + 1;
}
int main()
{
    cout <<LDBL_MAX;
    return 0;
}