#include <bits/stdc++.h>

using namespace std;
int n, m, smax;
string s[100005];
stack<char> q;
int a;
int main() {
    cin >> n >> m >> smax;
    for(int i = 0; i < n; i++) cin >> s[i];
    while(cin >> a) {
        if(a == -1) return 0;
        if(a == 0 && !q.empty()) cout << q.top(), q.pop();
        else {
            if(q.size() >= smax) {
                cout << q.top();
                q.pop();
            }
            q.push(s[a - 1][0]);
            s[a - 1].erase(0, 1);
        }
    }
    return 0;
}