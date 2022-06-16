#include <bits/stdc++.h>

using namespace std;
string s, S;
int t, sumtime;
int Time[11] = {0, 0, 0, 1, 2, 4, 8, 16, 32, 64};
int main() {
    getline(cin, s);
    while(cin >> S) {
        t++;
        if(t == 10 && S != s) {
            cout << "Locked";
            return 0;
        }
        if(s == S) {
            cout << sumtime;
            return 0;
        }
        sumtime += Time[t];
    }
    return 0;
}