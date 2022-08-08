#include<bits/stdc++.h>

using namespace std;
bool vis[105];
string str;
int ans;
int cal(int pos) {
    int res = 0;
    for(int i = pos; i < str.size(); i++) {
        if(vis[i]) continue;
        vis[i] = true;
        if(str[i] == '(') res += cal(i + 1);
        else if(str[i] == '|') return max(res, cal(i + 1));
        else if(str[i] == ')') return res;
        else res++;
    }
    return res;
}
int main() {
    cin >> str;
    cout << cal(0);
    return 0;
}