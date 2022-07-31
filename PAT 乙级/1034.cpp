#include <bits/stdc++.h>

using namespace std;
typedef long long int LL;
void print(LL a, LL b) {
    LL flag = 1;
    if(a * 1.0 / b < 0) flag = -1;
    a = abs(a), b = abs(b);
    LL t = __gcd(a, b);
    a = a / t, b = b / t;
    LL s = a / b;
    a = a % b;
    if(flag == -1) cout << "(";
    if(s > 0) {
        cout << s * flag;
        if(a) printf(" %lld/%lld", a, b);
    }
    else {
        if(a) printf("%lld/%lld", a * flag, b);
        else cout << 0;
    }
    if(flag == -1) cout << ")";
}
LL sum1, sum2;
int main() {
    LL a, b, c, d;
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);


    sum1 = a * d + c * b, sum2 = b * d;
    print(a, b); cout << " + "; print(c, d); cout << " = "; print(sum1, sum2);
    cout << endl;

    sum1 = a * d - c * b, sum2 = b * d;
    print(a, b); cout << " - "; print(c, d); cout << " = "; print(sum1, sum2);
    cout << endl;

    sum1 = a * c, sum2 = b * d;
    print(a, b); cout << " * "; print(c, d); cout << " = "; print(sum1, sum2);
    cout << endl;

    sum1 = a * d, sum2 = b * c;
    print(a, b); cout << " / "; print(c, d); cout << " = "; 
    if(sum2) print(sum1, sum2);
    else cout << "INF";
    return 0;
}
/*
2/3 -4/2
5/3 0/6
*/