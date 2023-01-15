#include <bits/stdc++.h>

using namespace std;
int s, c, len, pos;
char str[500005], ans[500005];
int main() {
    scanf("%s", str + 1);
    len = strlen(str + 1);
    for(int i = 1; str[i]; i++) s += (str[i] - '0');
    for(int i = len; i; i--) {
        c += s;
        ans[++pos] = '0' + c % 10;
        c /= 10, s -= (str[i]  - '0');
    }
    if(c) ans[++pos] = '0' + c % 10;
    for(int i = pos; i; i--) putchar(ans[i]);
    return 0;
}