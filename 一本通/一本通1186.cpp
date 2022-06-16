#include<bits/stdc++.h>

using namespace std;
map<char, int> m;
char a[1001];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(m[a[i]] > n / 2) cout << a[i] << " ";
    }
    return 0;
}