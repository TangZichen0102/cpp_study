#include <bits/stdc++.h>

using namespace std;
int a[10001] = {1}, n;
void print(int t) {
    cout << n << "=";
    for(int i = 1; i <= t - 1; i++) cout << a[i] << '+';
    cout << a[t] << endl;
}
void search(int s, int t) {
    for(int i = a[t - 1]; i <= s; i++)
        if(i < n) {
            a[t] = i;
            s -= i;
            if(s == 0) print(t);
            else search(s, t + 1);
            s += i;
        }
}
int main() {
    cin >> n;
    search(n, 1);
    return 0;
}