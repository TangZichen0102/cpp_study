#include <bits/stdc++.h>

using namespace std;
int cnt;
int main() {
    int n;
    cin >> n;
    while(n != 1) {
        cnt++;
        if(n % 2 == 1) n = n * 3 + 1;
        else n = n / 2;
        if(cnt == 1000) {
            cout << "No";
            return 0;
        }
    }
    cout << cnt;
    return 0;
}
