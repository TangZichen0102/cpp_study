#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        string s;
        int t, flag = 0;
        cin >> s >> t;
        while (t > 0) {
            int j;
            for (j = 0; j < s.size() - 1; j++)
                if (s[j] > s[j + 1]) {
                    s.erase(j, 1);
                    t--;
                    break;
                }
            if (j == s.size() - 1) break;
        }
        while (t--) s.pop_back();
        while (s.size() > 1 && s[0] == '0') s.erase(s.begin());
        cout << s << endl;
    }
    return 0;
}