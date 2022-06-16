#include <bits/stdc++.h>

using namespace std;
struct node
{
    string dir;
    int l, r;
} a[101];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].dir >> a[i].l >> a[i].r;
    int l = 0, r = 1e6;
    for (int i = n; i >= 1; i--)
        if (a[i].dir == "off") l += a[i].l, r += a[i].r;
        else if (a[i].dir == "on") l = max(0, l - a[i].r), r = max(0, r - a[i].l);
        else l = max(l, a[i].l), r = min(r, a[i].r);
    cout << l << " " << r << endl;
    l = 0 , r = 1e6;
    for(int i = 1 ; i <= n ; i++)
        if( a[i].dir == "on" ) l += a[i].l ,r += a[i].r;
        else if( a[i].dir == "off" ) l =  max(0,l - a[i].r),  r = max(0,r - a[i].l);
        else l = max(l, a[i].l),  r = min(r, a[i].r);
    cout << l <<" "<< r <<endl;
    return 0;
}