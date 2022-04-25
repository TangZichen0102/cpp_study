#include <bits/stdc++.h>

using namespace std;
int a[10] = {2, 5, 3, 1, 7, 4, 8, 9, 0, 6};

void print(int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void selSort(int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i + 1;
        for (int j = i + 1; j < n; j++)
            if(a[min] > a[j])
                min = j;
        if(a[min] < a[i])
            swap (a[min], a[i]);
        print(10);
    }
}

int main() {
    print(10);
    selSort(10);
    print(10);
    return 0;
}
