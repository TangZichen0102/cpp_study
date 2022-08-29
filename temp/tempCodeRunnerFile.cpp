#include <bits/stdc++.h>

using namespace std;
int cnt;
int main() {
    int n;
    cin >> n;
    string a;
    while(cin >> a) {
        if(a == "926718") {
            cout << "yes";
            return 0;
        }
        else {
            cnt++;
            if(cnt == n) {
                cout << "lock";
                return 0;
            }
            cout << "no" << endl;
        }
    }
    return 0;
}