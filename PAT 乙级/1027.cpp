#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, row = 0;
    char c;
    cin >> n >> c;
    if(n == 1) {
        cout << "*" << endl << 0;
        return 0;
    }
    for(int i = 0; i < n; i++) {
        if((2 * i * (i + 2) + 1) >= n) {
            row = i - 1;
            break;
        }
    }
    for(int i = row; i >= 1; i--) {
        for(int k = row - i; k >= 1; k--) cout << " ";
        for(int j = i * 2 + 1; j >= 1; j--) cout << c;
        cout << endl;
    }
    for(int i = 0; i < row; i++) cout << " ";
    cout << c << endl;
    for(int i = 1; i <= row; i++) {
        for(int k = row - i; k >= 1; k--) cout << " ";
        for(int j = i * 2 + 1; j >= 1; j--) cout << c;
        cout << endl;
    }
    cout << (n - (2 * row * (row + 2) + 1));
    return 0;
}