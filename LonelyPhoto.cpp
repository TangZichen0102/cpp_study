#include <bits/stdc++.h>

using namespace std;
int n;
char s[500001];

int main() {
    int sum;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) {
        int ans = 0, r = 3;
        for (int j = i; j < i + r; j++)
            if (s[j] == 'G' || s[j] == 'H') ans++;
        if (ans == 1) sum++;
    }
    cout << sum;
    return 0;
}
