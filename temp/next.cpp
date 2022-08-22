#include <bits/stdc++.h>

using namespace std;
string s;
int main() {
    cin >> s;
    int d1 = atoi(s.c_str());
    reverse(s.begin(), s.end());
    int d2 = atoi(s.c_str());
    cout << d1 + d2;
    return 0;
}