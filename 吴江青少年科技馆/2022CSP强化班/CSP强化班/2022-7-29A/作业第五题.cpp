#include <bits/stdc++.h>

using namespace std;
int a;
string s;
int tl(int x, int y) {
    while (y--)
        x *= 10;
    return x;
}
int initNine(int n) {
    int res = 0;
    while (n--)
        res = res * 10 + 9;
    return res;
}
void fun() {
    int a1 = 0, a2 = 0, a3 = 0, a, b;
    string s, s2, s3;
    scanf("%d.", &a1);
    cin >> s;
    int start = s.find("(");
    if (~start) {
        s2 = s.substr(0, start);
        int end = s.find(")");
        s3 = s.substr(start + 1, end - start - 1);
        a2 = atoi(s2.c_str());
        a3 = atoi(s3.c_str());
    }
    else a2 = atoi(s.c_str());
    if (a3 > 0) {
        a = tl(a2, s3.size()) + a3 - a2;
        b = tl(initNine(s3.size()), s2.size()) - a2;
    }
    else
    {
        a = a2;
        b = tl(1, s2.size() + 1);
    }
    int g = __gcd(a, b);
    cout << a / g << "/" << b / g << endl;
}
int main() {
    freopen("5.in", "r", stdin);
    int n;
    cin >> n;
    while(n--) {
        fun();
    }
    return 0;
}