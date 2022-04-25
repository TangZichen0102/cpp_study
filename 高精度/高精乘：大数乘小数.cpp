#include <bits/stdc++.h>

using namespace std;
int a[200], c[201], k = 0, j = 0;
long long b;

void printa() {
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void printc() {
    int point = 0;
    for (int i = 200; i > 0; i--) {
        if (c[i] == 0 && point == 0)
            continue;
        else
            point = 1;
        if (point == 1) {
            cout << c[i];
        }
    }
    cout << c[0];
}

int main() {
    string s1;
    cin >> s1 >> b;
    int len1 = s1.size();
    for (int i = len1 - 1; i >= 0; i--) {
        a[k] = s1[i] - '0';
        k++;
    }
    for (int i = 0; i <= len1; i++) {
        c[i] = a[i] * b;
    }
    for (int i = 0; i < 201; i++) {
        if (c[i] >= 10) {
            c[i + 1] = c[i + 1] + c[i] / 10;
            c[i] = c[i] % 10;
        }
    }
    printc();
    return 0;
}
