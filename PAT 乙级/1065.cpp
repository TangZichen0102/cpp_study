#include <bits/stdc++.h>

using namespace std;
vector<string> ans;
map<string, string> m;
map<string, int> hush;
int n, m;
string a, b;
string s[5005];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        m[a] = b, m[b] = a;
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> s[i];
        hush[s[i]] = 1;
    }
    for(int i = 0; i < m; i++)
        if(!hush[m[s[i]]]) ans.push_back(s[i]);
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) {
        if(i) cout << " ";
        cout << ans[i];
    }
    return 0;
}