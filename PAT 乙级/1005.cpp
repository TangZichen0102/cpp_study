#include <bits/stdc++.h>

using namespace std;
const int N = 1e4;
bool b[N];
int a[105];
vector<int> ans;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        int x = a[i];
        while(x != 1) {
            if(x & 1) x = x * 3 + 1, x /= 2;
            else x /= 2;
            b[x] = true;
        }
    }
    for(int i = 0; i < n; i++) 
        if(!b[a[i]]) ans.push_back(a[i]);
    sort(ans. begin(), ans.end());
    for(int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
        if(i) cout << " ";
    }
    cout << endl;
    return 0;
}