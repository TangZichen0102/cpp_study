#include <bits/stdc++.h>

using namespace std;
int n, cnt;
int s[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int str(int l, int r) {
    int cnt = 0;
    for (int i = l; i < r; i++) cnt = cnt * 10 + s[i];
    return cnt;
}
void fun() {
    int len = 9;
    for (int i = 1; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
        {
            int a = str(0, i), b = str(i, j), c = str(j, len);
            if (b % c != 0) continue;
            if (a + b / c == n) {
                printf("%d=%d+%d/%d\n", n, a, b, c);
                cnt++;
            }
        }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> n;
    do {
        fun();
    }while(next_permutation(s, s + 9));
    cout << cnt;
    return 0;
}