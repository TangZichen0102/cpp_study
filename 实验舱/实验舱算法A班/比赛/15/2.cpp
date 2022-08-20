#include <bits/stdc++.h>

using namespace std;
int n;
bool cmp(string a, string b) {
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}
vector<string> res;
int main() {
    cin >> n;
    for(int i = 1; i < (1 << n); i++) {
        string t;
        for(int j = 0; j < n; j++)
            if(i >> j & 1) t += (char)(j + 'A');
        res.push_back(t);
    }
    sort(res.begin(), res.end(), cmp);
    for(int i = 0; i < res.size(); i++) {
        string t = res[i];
        if(i != 0) printf(" %c ", "-+"[res[i].size() % 2]);
        cout << '|';
        for(int j = 0; j < res[i].size(); j++) {
            if(j != 0) cout << " & ";
            cout << res[i][j];
        }
        cout << '|';
    }
    return 0;
}