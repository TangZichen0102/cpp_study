#include <bits/stdc++.h>

using namespace std;
int minn = INT_MAX, n;
int a[15];
template <class T>
void read(T &r) {
    r = 0; 
    char c = getchar(); 
    bool f = false;
    while (c < 48 || c > 57) { 
        if (c == 45) f ^= 1; 
        c = getchar();
    }
    while (c >= 48 && c <= 57) {
        r = 10 * r + c - 48;
        c = getchar();
    }
    if (f) r = -r;
}
int main() {
    read(n);
    for(int i = 0; i < n; i++) read(a[i]);
    sort(a, a + n);
    do {
        int d = 0;
        string s;
        for(int i = 0; i < n; i++) s += to_string(a[i]);
        for(int i = 0; i < s.size() - 1; i++) {
            int t1 = s[i] - '0';
            int t2 = s[i + 1] - '0';
            d += abs(t1 - t2);
        }
        minn = min(minn, d);
    } while(next_permutation(a, a + n));
    cout << minn;
    return 0;
}