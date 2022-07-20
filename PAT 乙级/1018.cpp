#include <bits/stdc++.h>

using namespace std;
int x[3], y[3];
int main() {
    int n;
    cin >> n;
    char a, b;
    unordered_map<char, int> pr = {{'B', 0}, {'C', 1}, {'J', 2}};
    int cnt_s = 0, cnt_f = 0, cnt_p = 0;
    while(n--) {
        cin >> a >> b;
        if((pr[a] - pr[b] == -1) || (pr[a] - pr[b] == 2)) cnt_s++, x[pr[a]]++;
        else if(pr[a] - pr[b] == 0) cnt_p++;
        else cnt_f++, y[pr[b]]++;
    }
    cout << cnt_s << " " << cnt_p << " " << cnt_f << endl;
    cout << cnt_f << " " << cnt_p << " " << cnt_s << endl;
    int maxjia = x[0] >= x[1] ? 0 : 1;
    maxjia = x[maxjia] >= x[2] ? maxjia : 2;
    int maxyi = y[0] >= y[1] ? 0 : 1;
    maxyi = y[maxyi] >= y[2] ? maxyi : 2;
    char str[4] = {"BCJ"};
    cout << str[maxjia] << " " << str[maxyi];
    return 0;
}