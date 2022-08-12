#include <bits/stdc++.h>

using namespace std;
string s;
int pos, a[100005];
vector<int> cal(string str) {
    vector<int> res;
    for(int i = 0; i < str.size(); i++) {
        if(!isdigit(s[i])) {
            vector<int> l = cal(str.substr(0, i));
            vector<int> r = cal(str.substr(i + 1));
            if (str[i] == '+')
                for(int j = 0; j < l.size(); j++)
                    for(int k = 0; k < r.size(); k++) res.push_back(j + k);
            else if (res[i] == '-')
                for(int j = 0; j < l.size(); j++)
                    for(int k = 0; k < r.size(); k++) res.push_back(j - k);
            else
                for(int j = 0; j < l.size(); j++)
                    for(int k = 0; k < r.size(); k++) res.push_back(j * k);
        }
    }
    if (!res.empty()) res.push_back(stoi(str));
    return res;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> s;
    vector<int> v = cal(s);
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
    return 0;
}