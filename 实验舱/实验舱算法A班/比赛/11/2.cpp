#include <bits/stdc++.h>

using namespace std;
int n, s;
int main() {
    cin >> n >> s;
    map<char, int> m1, m2;
    for (int i = 1; i <= n; i++) {
        int a;
        s = (s * 345) % 19997;
        a = 97 + (s % 26);
        m1[a]++;
    }
    for (int i = 1; i <= n; i++) {
        int b;
        s = (s * 345) % 19997;
        b = 97 + (s % 26);
        m2[b]++;
    }
    
    cout << m1.size() - m2.size();
    return 0;
}