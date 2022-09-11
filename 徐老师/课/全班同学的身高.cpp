#include <bits/stdc++.h>

using namespace std;
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int BSearch(int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == a[mid])
            return mid;
        if (key > a[mid])
            low = mid + 1;
        if (key < a[mid])
            high = mid - 1;
    }
    return -1;
}

int main() {
    int x;
    cin >> x;
    cout << BSearch(0, 9, x);
    return 0;
}
