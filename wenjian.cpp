#include <bits/stdc++.h>
using namespace std;
int n;
// string s = "0123456789abcdefghijklmnopqrstuvwxyz";
string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string _Itoa(int n, int m) {
    string _s;
    do{
        int t = n % m;
        if(t >= 0 && t <= 36) _s += s[t];
        n /= m;
    }while(n != 0);
    reverse(_s.begin(), _s.end());
    return _s;
}
int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << _Itoa(i,n) << '*' << _Itoa(j,n) << '=';
            string s = _Itoa(i * j, n);
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
