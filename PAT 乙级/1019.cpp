#include <bits/stdc++.h>

using namespace std;
string a, b;
int main() {
    cin >>a;
    while(1) {
        while(a.size() < 4) a = "0" + a;
        sort(a.begin(), a.end());
        b = a;
        reverse(a.begin(), a.end());
        int temp1 = stoi(a), temp2 = stoi(b);
        if(temp1 == b) printf("%04d - %04d = 0000", temp1, temp2);
        if(temp1 - stoi(b) == 6174) {
            printf("%04d - %04d = 6174", temp1, temp2);
            break;
        }
        printf("%04d - %04d = %04d\n", temp1, temp2, temp1 - temp2);
        a = to_string(temp1 - temp2);
    }
    return 0;
}