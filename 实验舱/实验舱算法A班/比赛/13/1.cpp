#include <bits/stdc++.h>

using namespace std;
int n, m, s;
vector<queue<char> > tr;
queue<char> q;
stack<char> bac;
char c;
int x = 0;
void clear() {
    while(q.size()) q.pop();
}
int main() {
    cin >> n >> m >> s;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> c;
            q.push(c);
        }
        tr.push_back(q);
        clear();
    }
    while(true)  {
        cin >> x;
        if(x == -1) break;
        if(x == 0) {
            if(!bac.empty()) {
                cout << bac.top();
                bac.pop();
            }
        }
        else if(!tr[x - 1].empty() && bac.size() < s) {
            bac.push(tr[x - 1].front());
            tr[x - 1].pop();
        }
        else if(!tr[x - 1].empty() && bac.size() == s) {
            cout << bac.top();
            bac.pop();
            bac.push(tr[x - 1].front());
            tr[x - 1].pop();
        }
    }
    return 0;
}