#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        cin >> x;
        int sum = 0;
        do {
            sum += x % 10;
            x /= 10;
        }while(x);
        s.insert(sum);
    }
    cout << s.size() << endl;
    bool b = false;
    for(auto i:s) {
        if(!b) {
            cout << i;
            b = !b;
        }
        else cout << " " << i;
    }
    return 0;
}