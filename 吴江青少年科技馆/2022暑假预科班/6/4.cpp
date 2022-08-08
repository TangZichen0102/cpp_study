#include <bits/stdc++.h>

using namespace std;
int n;
bool check(string a, string b)
{
    if (a == b)
        return true;
    int lena = a.size(), lenb = b.size();
    if (lena == lenb && lena % 2 == 0 && lenb % 2 == 0)
    {
        string a1 = a.substr(0, lena / 2), a2 = a.substr(lena / 2, lena / 2);
        string b1 = b.substr(0, lenb / 2), b2 = b.substr(lenb / 2, lenb / 2);
        if((check(a1, b1) && check(a2, b2)) || 
           (check(a1, b2) && check(a2, b1))) return true;
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    string a, b;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (check(a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}