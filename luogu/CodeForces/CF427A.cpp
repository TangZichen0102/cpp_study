#include <bits/stdc++.h>

using namespace std;
int num, n, police, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> police;
        if (police > 0) ans += police;
        else if (police == -1) {
            if (ans > 0) ans--;
            else num++;
        }
    }
    cout << num;
}