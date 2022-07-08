#include <bits/stdc++.h>

using namespace std;

string s, S;
string s1[4];
string S1[4];
string s_S[4];
int cnt;


string _Itoa(int n, int m) {
    string _s;
    do{
        int t = n % m;
        if(t >= 0 && t <= 9) _s += t + '0';
        else _s += t - 10 + 'a';
        n /= m;
    }while(n != 0);
    reverse(_s.begin(), _s.end());
    return _s;
}


int main() {
    cin >> s >> S;
    // cout << "1111" << endl;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') {
            cnt++;
            continue;
        }
        s1[cnt] += s[i];
    }

    // cout << "111" << endl;
    cnt = 0;
    for(int i = 0; i < S.size(); i++) {
        // cout << "111" << endl;
        if(S[i] == '.') {
            cnt++;
            continue;
        }
        S1[cnt] += S[i];
    }
    // cout << "111";
    // for(int i = 0; i < 4; i++) {
    //     cout << s1[i] << " " << S1[i] << endl;
    // }



    for(int i = 0; i < 4; i++) {
        s1[i] = _Itoa(atoi(s1[i].c_str()), 2);
        S1[i] = _Itoa(atoi(S1[i].c_str()), 2);
        for(; s1[i].size() != 8;) s1[i] = '0' + s1[i];
        for(; S1[i].size() != 8;) S1[i] = '0' + S1[i];
        for(int j = 0; j < 8; j++) {
            if(s1[i][j] == '1' && S1[i][j] == '1') s_S[i][j] += '1';
            else s_S[i][j] += '0';
            // cout << s_S[i][j];
        }
        // cout << s1[i] << " " << S1[i] << endl;
        // cout << 1111;
        cout << s_S[i] << endl;
    }
    

    return 0;
}