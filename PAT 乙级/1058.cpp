#include <bits/stdc++.h>

using namespace std;
struct node {
    string s;
    int score;
}S[105];
int sum[1005];
int cnt[105];
int n, k;
bool check(string s, int m) {
    int k = 0;
    for(int i = 0; i < s.size(); i++) {
        if(S[m].s.find(s[i]) == -1) return false;
        k++;
    }
    return k == S[m].s.size();
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        cin >> S[i].score;
        int t;
        cin >> t >> t;
        for(int j = 1; j <= t; j++) {
            string x;
            cin >> x;
            S[i].s += x;
        }
    }
    string s;
    getline(cin, s);
    for(int i = 0; i < n; i++) {
        getline(cin, s);
        int t = 0;
        string temp;
        for(int j = 0; j < s.size(); j++) {
            if(s[j] >= 'a' && s[j] <= 'z') temp += s[j];
            if(s[j] == ')') {
                if(check(temp, t)) sum[i] += S[t].score;
                else cnt[t]++;
                t++;
                temp.clear();
            }
        }
    }
    for(int i = 0; i < n; i++) cout << sum[i] << endl;
    int ans = 0;
    for(int i = 0; i < k; i++)
        if(ans < cnt[i]) ans = cnt[i];
    if(ans) {
        cout << ans;
        for(int i = 0; i < k; i++) 
            if(cnt[i] == ans) cout << " " << i + 1;
    }
    else cout << "Too simple";
    return 0;
}