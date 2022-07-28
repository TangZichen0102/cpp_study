#include <bits/stdc++.h>

using namespace std;
int a[18] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char b[18] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
bool flag;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int sum = 0, j;
        for(j = 0; j <= 16; j++) {
            if(s[j] >= '0' && s[j] <= '9') sum += (s[j] -'0') * a[j];
            else {
                flag = true;
                cout << s << endl;
                break;
            }
        }
        if(j == 17 && b[sum % 11] != s[17]) flag = true, cout << s<< endl;
    } 
    if(!flag) cout << "All passed";
    return 0;
}