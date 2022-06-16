#include <bits/stdc++.h>
#define ll long long
#define E 1007
using namespace std;
char r[E][E] = {
    {""},
    {"-abcdefghijklmnopqrstuvwxyz"},
    {"-zabcdefghijklmnopqrstuvwxy"},
    {"-yzabcdefghijklmnopqrstuvwx"},
    {"-xyzabcdefghijklmnopqrstuvw"},
    {"-wxyzabcdefghijklmnopqrstuv"},
    {"-vwxyzabcdefghijklmnopqrstu"},
    {"-uvwxyzabcdefghijklmnopqrst"},
    {"-tuvwxyzabcdefghijklmnopqrs"},
    {"-stuvwxyzabcdefghijklmnopqr"},
    {"-rstuvwxyzabcdefghijklmnopq"},
    {"-qrstuvwxyzabcdefghijklmnop"},
    {"-pqrstuvwxyzabcdefghijklmno"},
    {"-opqrstuvwxyzabcdefghijklmn"},
    {"-nopqrstuvwxyzabcdefghijklm"},
    {"-mnopqrstuvwxyzabcdefghijkl"},
    {"-lmnopqrstuvwxyzabcdefghijk"},
    {"-klmnopqrstuvwxyzabcdefghij"},
    {"-jklmnopqrstuvwxyzabcdefghi"},
    {"-ijklmnopqrstuvwxyzabcdefgh"},
    {"-hijklmnopqrstuvwxyzabcdefg"},
    {"-ghijklmnopqrstuvwxyzabcdef"},
    {"-fghijklmnopqrstuvwxyzabcde"},
    {"-efghijklmnopqrstuvwxyzabcd"},
    {"-defghijklmnopqrstuvwxyzabc"},
    {"-cdefghijklmnopqrstuvwxyzab"},
    {"-bcdefghijklmnopqrstuvwxyza"},
};
char a[E], b[E];
bool upb[E];
int main()
{
    cin >> a >> b;
    ll lena = strlen(a);
    ll lenb = strlen(b);
    for (int i = 0; i < lena; i++)
        if ((ll) a[i] < 96) a[i] = (char)((ll)a[i] + 32);
    for (int i = 0; i < lenb; i++)
        if ((ll) b[i] < 96) b[i] = (char)((ll)b[i] + 32), upb[i] = 1;
    for (int i = 0; i < lenb; i++) {
        char u = b[i];
        char v = a[(i) % lena];
        if (i % lenb == 0) v = a[lenb];
        if (i == 0) v = a[0];
        if (upb[i] == 0) cout << r[(ll)v - 96][(ll)u - 96];
        else cout << (char)((ll)r[(ll)v - 96][(ll)u - 96] - 32);
    }
    return 0;
}