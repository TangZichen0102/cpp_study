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
int n;
int a;
int main() {
    cin >> n;
    while(true) {
        cin >> a;
        string s2 = _Itoa(a, 2);
        if(a == 0) return 0;
        for(int i = a + 1; ; i++) {
            string s = _Itoa(i, 2);
            int sum1 = 0, sum2 = 0;
            for(int j = 0; j < s.size(); j++)
                if(s[i] == '1') sum1++;
            for(int j = 0; j < s2.size(); j++)
                if(s2[i] == '1') sum2++;
            cout << s << " " << s2 << endl << sum1 << " " << sum2 << endl;
            if(sum1 == sum2) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}