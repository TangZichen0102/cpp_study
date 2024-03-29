#include <bits/stdc++.h>

using namespace std;
struct node {
    long long x1, y1, x2, y2;
    long long area() { 
        return abs(x2 - x1) * abs(y2 - y1);
    }
    long long xarea(node n) { 
        long long x = max(0LL, min(x2, n.x2) - max(x1, n.x1));
        long long y = max(0LL, min(y2, n.y2) - max(y1, n.x1));
        return x * y;
    }
};
int main() {
    node a, b, c;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;
    cout << (a.area() + b.area() - a.xarea(c) - b.xarea(c));
    return 0;
}