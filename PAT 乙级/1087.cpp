#include <bits/stdc++.h>

using namespace std;
set<int> s;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int a = floor(i / 2.0) +
                floor(i / 3.0) +
                floor(i / 5.0);
        s.insert(a);
    }
    cout << s.size();
    return 0;
}