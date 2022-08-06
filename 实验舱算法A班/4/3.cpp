#include <bits/stdc++.h>

using namespace std;
int t, n;
int a[2000005];
string f;
int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        cin >> f;
        for(int j = 0; j < f.size(); j++) {
            if(f[j] == '1') 
                if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
        int flag;
        for(int j = 0; j < n - 1; j++) {
            // cout << a[j];
            if(a[j] > a[j + 1]) {
                flag = 0;
                break;
            }
        }
        // cout << flag << " ";
        if(flag == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}