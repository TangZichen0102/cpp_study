#include<bits/stdc++.h>

using namespace std;
string yw[30] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "elven", "twelve",
                 "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "a",
                 "both", "another", "first", "second", "third"};
int sz[30] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 0, 21, 44, 69, 96, 25, 56, 89, 24, 61, 0, 1, 4, 1, 1, 4, 9};
int k;
int a[10];

int main() {
    for (int i = 1; i <= 6; i++) {
        string x;
        cin >> x;
        for (int j = 1; j <= 26; j++) //26种英文数字
            if (yw[j] == x) {
                a[++k] = sz[j];
                break;
            } //k记录有几个英文数字
    }
    if (k == 0) { //特判
        cout << 0 << endl;
        return 0;
    }
    sort(a + 1, a + k + 1); //排序
    for (int i = 1; i <= k; i++) {
        if (i != 1 && a[i] < 10) cout << 0; //补0
        cout << a[i];
    }
    return 0;
}
