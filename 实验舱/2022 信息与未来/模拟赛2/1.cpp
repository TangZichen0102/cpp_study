#include <bits/stdc++.h>

using namespace std;
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
int cnt = 0;
int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        string s1 = _Itoa(i, 5), s2 = _Itoa(i, 7) ,s3 = _Itoa(i, 9);
        int flag = 0;
        for(int j = 0; j < s1.size(); j++)
            if(s1[j] == '0') {
                flag = 1;
                break;
            }
        if(flag) continue;
        for(int j = 0; j < s2.size(); j++)
            if(s2[j] == '0') {
                flag = 1;
                break;
            }
        if(flag) continue;
        for(int j = 0; j < s3.size(); j++)
            if(s3[j] == '0') {
                flag = 1;
                break;
            }
        if(flag) continue;
        if(!flag) cnt++;
    }
    cout << cnt;
    return 0;
}