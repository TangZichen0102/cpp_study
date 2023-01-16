#include <bits/stdc++.h>

using namespace std;
long long a, b, c;
int main() {
  	cin >> a >> b >> c;
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
    if(a > c) swap(a, c);
    if(a + b <= c) cout << a + b;
  	else cout << (a + b + c) / 2;
    return 0;
}