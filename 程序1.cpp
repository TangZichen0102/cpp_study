#include <bits/stdc++.h>

using namespace std;

int main() {
    //问题一
    string s1;
    getline(cin, s1);
    cout << s1.size() << endl;
    //问题二
    string s2;
    int ans = 0;
    getline(cin, s2);
    for (char i: s2) ans += i - '0';
    cout << ans << endl;
    //问题三
    string s3;
    int ans1 = 0;
    getline(cin, s3);
    for (int i = 0; i < s3.size(); i += 2) ans1 += s3[i] - '0';
    cout << ans1 << endl;
    //问题四
    string s4;
    int ans2 = 0;
    getline(cin, s4);
    for (char i: s4)
        if (i == '4') ans2++;
    cout << ans2 << endl;
    //问题五
    string s5;
    getline(cin, s5);
    if (s5.size() % 2 == 0) cout << s5[s5.size() / 2 - 1];
    else cout << s5[s5.size() / 2];
    return 0;
}
/*
1325678945
987654
456160
143295823976154
123456
*/
