#include <bits/stdc++.h>

using namespace std;
int n;
unordered_map<string, int> m;
int sum;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        string _t;
        cin >> _t;
        m[_t]++;
    }
    int flag;
    do {
        flag = 0;
        if(m["cat"] >= 1) {
            flag = 1;
            sum++;
            m["cat"]--;
        }
        else if(m["c"] >= 1 && m["a"] >= 1 && m["t"] >= 1) {
            flag = 1;
            sum++;
            m["c"]--;
            m["a"]--;
            m["t"]--;
        }
        else if(m["c"] >= 1 && m["at"] >= 1) {
            flag = 1;
            sum++;
            m["c"]--;
            m["at"]--;
        }
        else if(m["ca"] >= 1 && m["t"] >= 1) {
            flag = 1;
            sum++;
            m["ca"]--;
            m["t"]--;
        }
    } while(flag == 1);
    cout << sum;
    return 0;
}