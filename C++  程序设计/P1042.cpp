#include <bits/stdc++.h>

using namespace std;
int n;

int main() {
    cin >> n;
    int cnt = 2 * n - 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < cnt; j++) cout << '*';
        cnt -= 2;
        cout << endl;
    }
    return 0;
}