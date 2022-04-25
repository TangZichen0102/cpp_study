#include <bits/stdc++.h>

using namespace std;
int a[10] = {7, 4, 3, 8, 8, 3, 3, 2, 6, 0};
int cnt[9];

void print(int n) {
    for (int i = 0; i < n; i++)
        while (cnt[i] > 0) {
            cout << i << " ";
            cnt[i]--;
        }
}

void cntSort(int n) {
    for (int i = 0; i < n; i++)
        cnt[a[i]]++;
}

int main() {
    cntSort(10);
    for (int i = 0; i < 9; i++)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < 9; i++)
        cout << cnt[i] << " ";
    cout << endl;
    print(9);
    return 0;
}6
