#include <bits/stdc++.h>

using namespace std;
struct cake{
    float stock, price, unit;
};
int cmp(cake a, cake b) {
    return a.unit > b.unit;
}
int main() {
    int n, need;
    cin >> n >> need;
    vector<cake> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].stock;
    for(int i = 0; i < n; i++) cin >> a[i].price;
    for(int i = 0; i < n; i++) a[i].unit = a[i].price / a[i].stock;
    sort(a.begin(), a.end(), cmp);
    float result = 0.0;
    for(int i = 0; i < n; i++) {
        if(a[i].stock <= need) result += a[i].price;
        else {
            result += a[i].unit * need;
            break;
        }
        need -= a[i].stock;
    }
    printf("%.2f", result);
    return 0;
}