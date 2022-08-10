#include <bits/stdc++.h>

using namespace std;
map<int, int> m;
void fac(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            n /= i;
            m[i]++;
            i = 2;
        }
    }
    if(n > 1) m[n]++;
}
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) fac(i);
    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}   