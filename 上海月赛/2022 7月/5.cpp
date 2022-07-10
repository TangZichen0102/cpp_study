#include <bits/stdc++.h>

using namespace std;
int n;
void shang1() {
    int cnt = n * 2;
    int cnt2 = 1;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < cnt; j++) cout << " ";
        if(i != 0) {
            cout << "*";
            for(int j = 0; j < cnt2; j++) cout << " ";
            cnt2 += 2;
            cout << "*";
        }
        else cout << "*";
        cnt--;
        cout << endl;
    }
    for(int i = 0; i < 2 * n + 1; i++) cout << "* ";
    cout << endl;
}
void shang2() {
    int cnt = 1;
    int cnt2 = 2 * n + 1 - 2 - ((n - 1) * 2 - 1) + 2;
    // cout << cnt2;
    int cnt3 = (n - 3) * 2 + 1;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 1; j <= cnt; j++) cout << " ";
        cout << "*";
        for(int j = 1; j <= cnt3; j++) cout << " ";
        if(cnt3 != -1) cout << "*";
        for(int j = 1; j <= cnt2 + 1; j++) cout << " ";
        cout << "*";
        for(int j = 1; j <= cnt3; j++) cout << " ";
        if(cnt3 != -1) cout << "*";
        cnt++;
        cnt3 -= 2;
        cnt2 += 2;
        cout << endl;
    }
}
void xia1() {
    int cnt = n - 2;
    int cnt2 = 1;
    int cnt3 = 2 * n + 1 - 2 - ((n - 1) * 2 - 1) + 2 + (n - 2) * 2 - 1;
    for(int i = 0; i < n - 2; i++) {
        for(int j = 0; j < cnt; j++) cout << " ";
        cout << "*";
        for(int j = 0; j < cnt2; j++) cout << " ";
        cout << "*";
        for(int j = 0; j < cnt3; j++) cout << " ";
        cout << "*";
        for(int j = 0; j < cnt2; j++) cout << " ";
        cout << "*";
        cnt2 += 2;
        cnt3 -= 2;
        cnt--;
        cout << endl;
    }
}
void xia2() {
    for(int i = 0; i < 2 * n + 1; i++) cout << "* ";
    cout << endl;
    int cnt = n * 2 - (n - 2);
    int cnt2 = (n - 3) * 2 + 1;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < cnt; j++) cout << " ";
        cout << '*';
        for(int j = 0; j < cnt2; j++) cout << " ";
        if(cnt2 != -1) cout << "*";
        cnt++;
        cnt2 -= 2;
        cout << endl;
    }
}
void shang() {
    shang1(), shang2();
}
void xia() {
    xia1(), xia2();
}
void res() {
    shang(), xia();
}
int main() {
    cin >> n;
    res();
    return 0;
}
/*
4
        * 
       * * 
      *   * 
* * * * * * * * * 
 *   *     *   * 
  * *       * * 
   *         * 
  * *       * *
 * * *     * * *
* * * * * * * * *
      * * *
       * *
        *
*/