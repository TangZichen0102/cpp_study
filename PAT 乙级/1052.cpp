#include <bits/stdc++.h>

using namespace std;
vector<string> v[3];
map<string, int> m, m1, m2;
int main() {
    for(int i= 0; i < 3; i++) {
        string s;
        getline(cin, s);
        for(int j = 0; j < s.size(); j++) {
            string temp;
            if(s[j] == '[') {
                while(s[++j] != ']' && j < s.size()) temp += s[j];
                v[i].push_back(temp);
                if(i == 0) m[temp] = 1;
                if(i == 1) m1[temp] = 1;
                if(i == 2) m2[temp] = 1;
            }
        }
    }
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        a--, b--, c--, d--, e--;
        if(a < v[0].size() && b < v[1].size() && c < v[2].size() && d < v[1].size() && e < v[0].size()) {
            if(m[v[0][a]] && m1[v[1][b]] && m2[v[2][c]] && m1[v[1][d]] && m[v[0][e]])
                printf("%s(%s%s%s)%s\n", v[0][a].c_str(), v[1][b].c_str(), v[2][c].c_str(), v[1][d].c_str(), v[0][e].c_str());
            else cout << "Are you kidding me? @\\/@" << endl;
        }
        else cout << "Are you kidding me? @\\/@" << endl;
    }
    return 0;
}