#include <bits/stdc++.h>

using namespace std;
int n;
int a[100005], b[100005];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    /*
    for(int i = 0; i < n; i++) {
        cout << a[i] << " " << b[i] << endl;
    }
    */

    for (int i = 0; i < n; i++) {
        if(a[i] % 3 == 0 && b[i] % 3 == 0 && a[i] == b[i]) {
            cout << "YES" << endl;
            continue;
        }
        else if(a[i] / b[i] == 2 || b[i] / a[i] == 2) {
            cout << "YES" << endl;
            continue;
        }
        else if((a[i] % 3 == 2 && a[i] % 3 == 1) || (a[i] % 3 == 1 && a[i] % 3 == 2)) {
            cout << "YES" << endl;
            continue;
        }
        else cout << "NO" << endl;
    }
    return 0;
}