#include <bits/stdc++.h>

using namespace std;
string a[15];
int ans1, ans2;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    string s1 = "", s2 = "";
    for(int i = 0; i < find(a[0].begin(), a[0].end(), '/') - a[0].begin(); i++) s1 += a[0][i];
    for(int i = find(a[0].begin(), a[0].end(), '/') - a[0].begin(); i <= a[0].size(); i++) s2 += a[0][i];
    ans1 = atoi(s1.c_str());
    ans2 = atoi(s2.c_str());
    for(int i = 1; i < n; i++) {
        
    }
    return 0;
}