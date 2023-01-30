#include <bits/stdc++.h>

using namespace std;
int n, w[1000005];
vector<int> s;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) {
        bool f = true;
        while(f && w[i] < 0 && s.size() && w[s.back()] > 0) {
            if(-w[i] <= w[s.back()]) f = false;
            if(w[s.back()] <= -w[i]) s.pop_back();
        }
        if(f) s.push_back(i);
    }
    cout << s.size() << endl;
    for(auto &&i: s) cout << i << " ";
    return 0;
}