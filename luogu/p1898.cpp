#include <bits/stdc++.h>
using namespace std;
string s;
bool flag;
int a[101], st, num, sum, w;
int main() {
    cin >> s >> st;
    for (int i = 0; i < s.size(); i++) {
        w = 10000, flag = 0;
        while(w) {
            if(num >= w) flag = 1;
            if(flag) a[++sum] = num / w;
            num = num % w;
            w /= 10; 
        }
        num = s[i] - 'A' + st;
    }
    while (sum > 2) {
        if (sum == 3 && a[1] == 1 && a[2] == 0 && a[3] == 0) {
            cout << 100;
            return 0;
        }
        for (int i = 1; i < sum; i++) a[i] = (a[i] + a[i + 1]) % 10;
        sum--;
    }
    if (sum == 1) cout << a[1];
    else cout << a[1] * 10 + a[2];
    return 0;
}
