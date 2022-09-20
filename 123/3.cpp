#include <bits/stdc++.h>

using namespace std;
int _Itoa1(string str, int base)
{
    int num_ten = 0, in, exp;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] - 48 < 10) in = str[i] - 48;
        else in = str[i] - 'A' + 10;
        exp = str.size() - 1 - i;
        num_ten += in * pow(base, exp);
    }
    return num_ten;
}
string _Itoa2(int n, int m)
{
    string _s;
    do
    {
        int t = n % m;
        if (t >= 0 && t <= 9)
            _s += t + '0';
        else
            _s += t - 10 + 'A';
        n /= m;
    } while (n != 0);
    reverse(_s.begin(), _s.end());
    return _s;
}
int main()
{
    int n, m;
    string s;
    cin >> n >> m >> s;
    int sum = _Itoa1(s, n);
    string sum2 = _Itoa2(sum, m);
    int flag = 0, flag1 = 0;
    for(int i = 0; i < s.size(); i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            flag1 = 1;
            break;
        }
    }
    for(int i = 0; i < sum2.size(); i++) {
        if((sum2[i] >= 'a' && sum2[i] <= 'z') || (sum2[i] >= 'A' || sum2[i] <= 'Z')) {
            flag = 1;
            break;
        }
    }
    if(flag1 == 1) {
        for(int i = 0; i < sum2.size(); i++) {
            if(sum2[i] >= 'a' && sum2[i] <= 'z') cout << char(sum2[i] - 32);
        }
    }
    else if(flag == 1) {
        for(int i = 0; i < sum2.size(); i++) {
            if(sum2[i] >= 'A' && sum2[i] <= 'Z') cout << char(sum2[i] + 32);
        }
    }
    cout << sum2;
    return 0;
}
