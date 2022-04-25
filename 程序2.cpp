#include <bits/stdc++.h>

using namespace std;

int length(int n) {
    return (int) log10(n) + 1;
}

int main() {
    string s;
    getline(cin, s);
    int P, D;
    cin >> P >> D;
    if (s[s.size() - P] >= 0 && s[s.size() - P] <= 4) {
        int ans = s[s.size() - P] + (D + '0');
        s[s.size() - P] = (ans + '0') % 10;
        for (int i = P; i <= s.size(); i++) s[i] = '0';
    } else if (s[s.size() - P] >= 5 && s[s.size() - P] <= 9) {
        int ans = s[s.size() - P] - (D + '0');
        int sum = length(ans);
        s[s.size() - P] = (abs(ans) + '0') / (pow(10, sum - 1) + '0');
        for (int i = P; i <= s.size(); i++) s[i] = '0';
    }
    for(int i = 0; i < s.size(); i++) cout << s[i];
    return 0;
}
