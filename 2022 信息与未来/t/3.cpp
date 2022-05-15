#include <bits/stdc++.h>

using namespace std;

struct REC
{
    long long x1, y1, x2, y2;

    long long area()
    {
        return (x2 - x1) * (y2 - y1);
    }

    long long xArea(REC r)
    {
        long long _x = max(0LL, min(r.x2, x2) - max(r.x1, x1));
        long long _y = max(0LL, min(r.y2, y2) - max(r.y1, y1));

        return _x * _y;
    }
};

int main()
{

    REC r1;
    REC r2;
    REC r3;
    cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
    cin >> r2.x1 >> r2.y1 >> r2.x2 >> r2.y2;
    cin >> r3.x1 >> r3.y1 >> r3.x2 >> r3.y2;

    cout << (r1.area() + r2.area() - r1.xArea(r3) - r2.xArea(r3));

    ;

    return 0;
}
/*
1 2 3 5
6 0 10 4
2 1 8 3


 1 2 3 5
 2 1 8 3


 */