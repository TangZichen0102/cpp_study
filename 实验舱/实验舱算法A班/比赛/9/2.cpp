#include <bits/stdc++.h>

using namespace std;
string s;
int pos, a[100005];
vector<int> cal(string str) {
    vector<int> res;
    for(int i= 0; i < str.size(); i++) {
        if(!isdigit(s[i])) {
            vector<int> l = cal(str.substr(0, i));
            vector<int> r = cal(str.substr(i + 1));
            if(str[i] == '+')
                for(auto )
        }
    }
}
int main() {
    
    return 0;
}