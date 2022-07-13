#include <bits/stdc++.h>

using namespace std;
int n;
string a = "abbaabba", b = "baababab";
int main() {
    int lena = a.size(), lenb = b.size();
    string a1 = a.substr(0, lena / 2), a2 = a.substr(lena / 2, lena / 2);
    string b1 = b.substr(0, lenb / 2), b2 = b.substr(lenb / 2, lenb / 2);
    cout << a1 << " " << a2 << endl << b1 << " " << b2 << endl;
    return 0;
}