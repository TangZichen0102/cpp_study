#include <bits/stdc++.h>

using namespace std;
char a[1005][1005];
char b[1005][1005];
int n;
void san1() {
    int cnt1 = n * 3 - 3;
    int cnt2 = 0;
    for(int i = 1; i <= n * 3 - 3; i++) {
        for(int j = 1; j <= cnt1; j++) a[i][j] = ' ';
        a[i][cnt1 + 1] = '*';
        for(int j = cnt1 + 2; j <= cnt1 + cnt2; j++) a[i][j] = ' ';
        if(i != 1) a[i][cnt1 + cnt2 + 3] = '*'; 
        cnt1--;
        cnt2+= 2;
    }
    cnt2 = n * 3 - 2;
    for(int i = 1; i <= cnt2 * 2; i++) {
        a[cnt2][i++] = '*';
        a[cnt2][i] = ' ';
    }
}
int main() {
    for(int i = 1; i <= n * 3 - 2 + (n - 1); i++)
        for(int j = 1; j <= (n * 3 - 2) * 2; j++) a[i][j] = ' ', b[i][j] = ' ';
    cin >> n;
    san1();
    // for(int i = 1; i <= n * 3 - 2 + (n - 1); i++) {
    //     for(int j = 1; j <= (n * 3 - 2) * 2; j++) cout << a[i][j];
    //     cout << endl;
    // }
    for(int i = n * 3 - 2 + (n - 1); i >= 1; i--) {
        for(int j = 1; j <= (n * 3 - 2) * 2; j++) b[i][j] = a[i][j];
    }
    for(int i = n * 3 - 2 + (n - 1); i >= 1; i--) {
        for(int j = 1; j <= (n * 3 - 2) * 2; j++) {
            if(a[i][j] == '*' || b[i][j] == '*') cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
    return 0;
}