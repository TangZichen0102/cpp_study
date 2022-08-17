/*
题目来源

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
vector<long double> allsx, allsy;
struct node {
    double x1, y1, x2, y2;
    long double area() {
        return (y2 - y1) * (x2 - x1);
    }
    long double xarea(node b) {
        double x = max(0.0, min(x2, b.x2) - max(x1, b.x1));
        double y = max(0.0, min(y2, b.y2) - max(y1, b.y1));
        return x * y;
    }

}a[105];
long double sum;
int findx(int x) {
    int l = 0, r = allsx.size() - 1;
    while(l < r) {
        int mid = (l + r) >> 1;
        if(allsx[mid] >= x) r = mid;
        else l = mid + 1; 
    }
    return r + 1;
}
int findy(int x) {
    int l = 0, r = allsy.size() - 1;
    while(l < r) {
        int mid = (l + r) >> 1;
        if(allsy[mid] >= x) r = mid;
        else l = mid;
    }
    return r + 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    //freopen(".in", "r", stdin);
#endif
   cin >> n;
   for(int i = 1; i <= n; i++) {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    allsx.push_back(x1);
    allsx.push_back(x2);
    allsy.push_back(y1);
    allsy.push_back(y2);
    a[i] = {x1, y1, x2, y2};
   }
   sort(allsx.begin(), allsx.end());
   sort(allsy.begin(), allsy.end());
   allsx.erase(unique(allsx.begin(), allsx.end()), allsx.end());
   allsy.erase(unique(allsy.begin(), allsy.end()), allsy.end());
   for(int i = 1; i <= n - 1; i++) {
        sum += a[i].area();
        // cout << i << ':' << a[i].area() << endl;
        for(int j = i + 1; j <= n; j++) {
            sum -= a[i].xarea(a[j]);
        }
   }
   sum += a[n].area();
   printf("%.2llf", sum);
   return 0;
}
/*
样例及推导

*/