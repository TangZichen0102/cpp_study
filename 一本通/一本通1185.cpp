#include <bits/stdc++.h>

using namespace std;
string s[1001];
int main() {
    int cnt = 0;
    while(cin >> s[cnt]) {
        sort(s, s + cnt);
        cnt++;
    }
    for(int i = 0; i < cnt; i++) cout << s[i] << endl;
    return 0;
}