#include <bits/stdc++.h>

using namespace std;
string S[10005];
int cnt;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        string s;
        int t;
        cin >> s >> t;
        while (t > 0) {
            int j = 0;
            for (; j < s.size() - 1; j++)
                if (s[j] > s[j + 1]) {
                    s.erase(j, 1);
                    t--;
                    break;
                }
            if (j == s.size() - 1) break;
        }
        while (t--) s.pop_back();
        while (s.size() > 1 && s[0] == '0') s.erase(s.begin());
        S[cnt++] = s;
    }
    for(int i = 0; i < cnt; i++) cout << S[i] << endl; 
    return 0;
}