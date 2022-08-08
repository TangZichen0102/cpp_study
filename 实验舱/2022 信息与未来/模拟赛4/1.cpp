#include <bits/stdc++.h>

using namespace std;
long long a, b;
string s;
int main() {
    cin >> a >> b;
    s = to_string(a + b);
    for(long long i = 0;  i < s.size(); i++) cout << s[i] << endl;
    return 0;
}