#include <bits/stdc++.h>

using namespace std;
struct node {
    int flag = 0;
    int x = 0, y = 0;
    void move(int d, int len) {
        flag += d;
        flag %= 4;
        if(flag == 0) y += len;
        else if(flag == 1) x += len;
        else if(flag == 2) y -= len;
        else x -= len;
    }
}t;
void fun(int deg, int len) {
    int d = deg / 90;
    t.move(d, len);
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    int n;
    cin >> n; 
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 0) fun(b, c);
        else fun(360 - b, c);
    }
    cout << t.x << " " << t.y;
    return 0;
}