#include <bits/stdc++.h>

using namespace std;
int a[10] = {3, 6, 7, 1, 2, 4, 9, 5, 8, 0};

void print(int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void instSort(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j > 0; j--) {
            if (a[j] > a[j - 1])
                swap(a[j], a[j - 1]);
            else
                break;
        }
        print(n);
    }
}

int main() {
    print(10);
    instSort(10);
    print(10);
    return 0;
}
