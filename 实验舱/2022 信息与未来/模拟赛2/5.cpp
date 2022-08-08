#include <bits/stdc++.h>

using namespace std;
set<int> s;
int n;
int main() {
    cin >> n;
    if(n == 0) {
        cout << 6 << " " << 36;
        return 0;
    }
    int a, b, c;
    cin >> a >> b >> c;
    
    cout << a + b + c + 3 << " " << a + b + c + 18;
    return 0;
}