#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    stringstream s;
    s.precision(0);
    s << fixed << pow(2.0L, n + 1);
    string a = s.str();
    a[a.length() - 1] -= 2;
    cout << a << endl;
    return 0;
}