#include <bits/stdc++.h>

using namespace std;
string sa, sb;
char ca, cb;
string sA, sB;
void sumsa() {
    for(int i = 0; i < sa.size(); i++)
        if(sa[i] == ca) sA += sa[i];
}
void sumsb() {
    for(int i = 0; i < sb.size(); i++)
        if(sb[i] == cb) sB += sb[i];
}
void sumsab() {
    sumsa();
    sumsb();
}
int main() {
    cin >> sa >> ca >> sb >> cb;
    sumsab();
    cout << atoi(sA.c_str()) + atoi(sB.c_str());
    return 0;
}