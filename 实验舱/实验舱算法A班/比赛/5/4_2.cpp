/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, sum;
vector<LL> x, y;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        LL _x, _y;
        scanf("%lld %lld", &_x, &_y);
        x.push_back(_x);
        y.push_back(_y);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int i = 0, j = n - 1;
    while(i < j) {
        sum += x[j] - x[i];
        sum += y[j] - y[i];
        j--, i++;
    }
    cout << sum;
    return 0;
}   
/*  
样例及推导

*/  