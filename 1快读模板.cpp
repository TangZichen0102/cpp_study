#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

template <class T>
void read(T &r) {
        r = 0; char c = getchar(); bool f = false;
        while (c < 48 || c > 57) { if (c == 45) f ^= 1; c = getchar(); }
        while (c >= 48 && c <= 57) { r = (r << 1) + (r << 3) + c - 48; c = getchar();}
        if (f) r = -r;
}

int main()
{
    LL n;
    read(n);
    cout <<n;
    return 0;
}
