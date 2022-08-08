#include <bits/stdc++.h>

using namespace std;
int a[100];
int s1, s2, s3;
int main() {
    int maxN = -10, maxn = -10;
    cin >> s1 >> s2 >> s3;
    for(int i = 1; i <= s1; i++)
        for(int j = 1; j <= s2; j++)
            for(int k = 1; k <= s3; k++) a[i + j + k]++;
    for(int i = 1; i <= s1 + s2 + s3; i++) {
        if(a[i] > maxn) {
            maxn = a[i];
            maxN = i;
        }
    }
    cout << maxN << endl;
    return 0;
}