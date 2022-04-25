#include<bits/stdc++.h>

using namespace std;

int main() {
    int k = 0;
    int a[1010], h[1010];
    int n = 1;
    while (cin >> a[n]) n++;
    n--;
    for (int i = 1; i <= n; i++) {
        int loc = 0;
        for (int j = 1; j <= k; j++) {
            if (a[i] <= h[j]) {
                if (loc == 0) loc = j;
                else {
                    if (h[j < h[loc]])
                        loc = j;
                }
            }
        }
        if(loc == 0){
            k++;
            h[k] = a[i];
        }
        else
            h[loc] = a[i];
    }
    cout << k;
}
