#include <bits/stdc++.h>

using namespace std;
int n, m;
unordered_map<string, int> um;
string name1[20005], name2[20005];
int sum = 0;
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> name1[i];
        um[name1[i]] = 1;
    }
    for(int i = 0; i < m; i++) {
        cin >> name2[i];
        um[name2[i]] = 0;
    }
    for(auto i:um)
        if(i.second == 1) sum++;
    cout << sum;
    return 0;
}