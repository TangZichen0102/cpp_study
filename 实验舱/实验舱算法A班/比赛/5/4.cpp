#include <bits/stdc++.h>

using namespace std;
struct node {
    int x, y;
} a[100005];
int minn = INT_MAX;
int x, y;
int main() {
    int x1 = INT_MAX, y1 = INT_MIN, x2 = INT_MIN, y2 = INT_MAX;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
        x1 = min(x1, a[i].x);
        y1 = max(y1, a[i].y);
        x2 = max(x2, a[i].x);
        y2 = min(y2, a[i].y);
    }
    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            int sum = abs(i - a[i].x) + abs(j - a[i].y);
            if(minn > sum) {
                minn = sum;
                x = i, y = j;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        // cout << abs(a[i].x - x) + abs(a[i].y - y) << " ";
        sum += abs(a[i].x - x) + abs(a[i].y - y);
    }
    cout << sum;
    return 0;
}