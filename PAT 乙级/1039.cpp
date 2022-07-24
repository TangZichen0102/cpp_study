#include <bits/stdc++.h>

using namespace std;
int q[256];
int main() {
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++) q[a[i]]++;
    int cnt = 0;
    for(int i = 0; i < b.size(); i++) {
        if(q[b[i]] > 0) q[b[i]]--;
        else cnt++;
    }
    if(cnt != 0) cout << "No " << cnt;
    else cout << "Yes " << a.size() - b.size();
    return 0;
}