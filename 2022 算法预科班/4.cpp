#include <bits/stdc++.h>

using namespace std;
struct node {
    int hh, mm;
    int cnt;
    int sumh = 0, summ = 0;
}a[1005], b[1005];
int cmp(node a, node b) {
    if(a.sumh != b.sumh) return a.sumh < b.sumh;
    else
        if(a.summ != b.summ) return a.summ < b.summ;
        else
            if(a.hh != b.hh) return a.hh < b.hh;
            else 
                if(a.mm != b.mm) return a.mm < b.mm;
                else 
                    if(a.cnt != b.cnt) return a.cnt < b.cnt;
}
int n;
char c;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i].hh >> c >> a[i].mm >> b[i].hh >> c >>  b[i].mm;
        a[i].cnt = i;
        a[i].summ = a[i].mm + b[i].mm;
        a[i].sumh = (a[i].hh + b[i].hh + a[i].summ / 60) % 24;
        a[i].summ %= 60;
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++) cout << a[i].cnt << endl;
    return 0;
}