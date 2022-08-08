#include <bits/stdc++.h>

using namespace std;
const int MAXN = 300 + 4;
char s1[MAXN], s2[MAXN];
int tmp[MAXN], a[MAXN], b[MAXN], c[MAXN];

int compare(const int x[], const int y[]) {
    if (x[0] > y[0]) return 1;
    else if (x[0] < y[0]) return -1;
    for (int i = x[0]; i > 0; i--) {
        if (x[i] > y[i]) return 1;
        else if (x[i] < y[i]) return -1;
    }
    return 0;
}

void numcpy(const int x[], int y[], int dest) {
    for (int i = 1; i <= x[0]; i++) y[i + dest - 1] = x[i];
    y[0] = x[0] + dest - 1;
}

int main() {
    cin >> s1 >> s2;
    bool flaga = false;
    bool flagb = false;
    if ('-' == s1[0]) {
        flaga = true;
        strcpy(s1, &s1[1]);
    }
    if ('-' == s2[0]) {
        flagb = true;
        strcpy(s2, &s2[1]);
    }
    if (true == flaga && false == flagb) cout << "-";
    int len = strlen(s1);
    a[0] = len;
    for (int i = 0; i < len; i++) a[len - i] = s1[i] - '0';
    len = strlen(s2);
    b[0] = len;
    for (int i = 0; i < len; i++) b[len - i] = s2[i] - '0';
    if (0 == compare(a, b)) {
        cout << 1 << endl << 0 << endl;
        return 0;
    } else if (-1 == compare(a, b)) {
        cout << 0 << endl;
        if (true == flaga) cout << "-";
        cout << s1 << endl;
        return 0;
    } else {
        c[0] = a[0] - b[0] + 1;
        for (int i = c[0]; i > 0; i--) {
            memset(tmp, 0, sizeof(tmp));
            numcpy(b, tmp, i);
            while (compare(a, tmp) >= 0) {
                c[i]++;
                for (int j = 1; j <= a[0]; j++) {
                    if (a[j] < tmp[j]) {
                        a[j + 1]--;
                        a[j] += 10;
                    }
                    a[j] -= tmp[j];
                }
                int k = a[0];
                while (a[k] == 0) k--;
                a[0] = k;
            }
        }
        while (c[0] > 0 && c[c[0]] == 0) c[0]--;
    }
    for (int i = c[0]; i > 0; i--) cout << c[i];
    cout << endl;
    if (0 == a[0]) cout << 0 << endl;
    else {
        if (true == flaga) cout << "-";
        for (int i = a[0]; i > 0; i--) cout << a[i];
        cout << endl;
    }
    return 0;
}
