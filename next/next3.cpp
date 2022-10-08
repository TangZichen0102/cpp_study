#include <bits/stdc++.h>

using namespace std;
int lowbit(int x) {
    return x & -x;
}
int main() {
    unordered_map<int, int> Map = {{1, 0}, {2, 1}, {4, 2}, {8, 3}};
    string a = {'1', '2', '3', '4'};
    for(int i = 0; i < 1 << 4; i++) {
        cout << "plan" << i << ": ";
        for(int j = 0; j < 4; j++)
            if(i >> j & 1) cout << a[j] << " ";
        cout << endl;
    }
    cout << endl;
    int state = 7;
    for(int i = state; i; i -= lowbit(i)) {
        int idx = Map[lowbit(i)];
        cout << a[idx] << " ";
    }
    return 0;
}