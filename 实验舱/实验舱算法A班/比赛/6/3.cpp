#include <bits/stdc++.h>

using namespace std;
int n;
struct node {
    int x, y;
    bool flag;
}a[100005];
int x, y;
int ans;
bool cmp(node a, node b) {
    if(a.y == b.y) return a.x < b.x;
    return a.y > b.y;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a[i].x = x;
        a[i].y = y;
    }   
    sort(a, a + n, cmp);
    while(true) { 
        bool flag2 = false;
        for(int i = 0; i < n; i++)
            if(a[i].flag == false) {
                flag2 = true;
                x = a[i].x;
                y = a[i].y;
                break;
            }
        if(flag2 == false) {
            // cout << "1";
            break; // 当所有气球都被射完时，跳出
        }
        cout << x << " " << y << endl;
        bool flag3 = false;
        for(int i = 0; i < n; i++)
            if(x <= a[i].x && y == a[i].y && a[i].flag == false) {
                y--;
                x = a[i].x;
                a[i].flag = true;
                flag3 = true;
                // cout << "2";
                break; // 这一行搜到气球
            }
        if(flag3 == false) {
            ans++;
            for(int i = 0; i < n; i++) {
                if(a[i].flag == false) {
                    x = a[i].x;
                    y = a[i].y;
                    // cout << "3";
                    break;
                }
            }
            cout << endl;
        }
        x++;
    }
    cout << ans;
    return 0;
}