#include <bits/stdc++.h>

using namespace std;
int n;
char c;
int main() {
    cin >> n >> c;
    for(int i = 0; i < n; i++) cout << c;
    cout << endl;
    for(int i = 0; i < floor((double)(n / 2.0 + 0.5)) - 2; i++) {
        cout << c;
        for(int i = 0; i < n - 2; i++) cout << " ";
        cout << c << endl;
    }
    for(int i = 0; i < n; i++) cout << c;
    return 0;
}