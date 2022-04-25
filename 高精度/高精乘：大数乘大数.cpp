#include <bits/stdc++.h>

using namespace std;
int a[2000], b[2000], c[4001], k = 0, j = 0;

void printa() {
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    cout<< endl;
}

void printb() {

    for (int i = 0; i < j; i++)
        cout << b[i] << " ";
    cout << endl;
}

void printc() {
    int point = 0;
    for (int i = 4000; i > 0; i--) {
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
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.size();
    for (int i = len1 - 1; i >= 0; i--) {
        a[k] = s1[i] - '0';
        k++;
    }
    int len2 = s2.size();
    for (int i = len2 - 1; i >= 0; i--) {
        b[j] = s2[i] - '0';
        j++;
    }
    for (int i = 0; i < len1; i++) {
        for(int j = 0; j < len2; j++)
            c[i + j] += a[i] * b[j];
    }
    for (int i = 0; i < 4000; i++) {
        if (c[i] >= 10) {
            c[i + 1] = c[i + 1] + c[i] / 10;
            c[i] = c[i] % 10;
        }
    }
    printc();
    return 0;
}
