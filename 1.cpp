#include <bits/stdc++.h>

using namespace std;
string s = "12345";
int main() {
    cout << find(s.begin(), s.end(), '5') - s.begin() << endl;
    return 0;
}