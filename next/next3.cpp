#include <bits/stdc++.h>

using namespace std;
set<string> s = {"123", "456", "789"};
int main() {
    string str = "1011";
    auto a = lower_bound(s.begin(), s.end(), str);
    if(*a != str) 
    cout << *a;S
    return 0;
}