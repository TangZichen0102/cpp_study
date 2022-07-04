#include <bits/stdc++.h>

using namespace std;
vector<string> ans;
int main() {
    string s, x;
    getline(cin, s);
    stringstream l(s);
    while(l >> x) ans.push_back(x);
    for(int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
        if(i) cout << " ";
    }
    return 0;
}