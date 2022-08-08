#include <bits/stdc++.h>

using namespace std;
int n;
int w, a;
int b[605];
int main() {
    cin >> n >> w;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        b[a]++;
        int x = max(1, int(i * w / 100.0));
        int sum = 0;
        for(int j = 600; j >= 0; j--) {
            sum += b[j];
            if(sum >= x) {
                cout << j << " ";
                break;
            }
        }
    }
    return 0;
}