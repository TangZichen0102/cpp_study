#include <bits/stdc++.h>

using namespace std;
string v[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main() {
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;
    int cnt1 = 0;
    int res1, res2, res3;
    for(int i = 0; i < (str1.size() < str2.size() ? str1.size() : str2.size()); i++) {
        if(str1[i] == str2[i] && (str1[i] >= 'A' && str1[i] <= 'Z')) {
            if(cnt1 = 0) {
                res1 = str1[i] - 'A';
                cnt1++;
            }
        }
        if(str1[i] == str2[i] && ((str1[i] >= '0' && str1[i] <= '9') || (str1[i] >= 'A' && str1[i] <= 'Z'))) {
            if(cnt1 == 1) {
                if(str1[i] >= 'A' && str1[i] <= 'Z') res2 = str1[i] - 'A' + 1 + 9;
                else res2 = str1[i] - '0';
                break;
            }
        }
    }
    for(int i = 0; i < (str3.size() < str4.size() ? str3.size() : str4.size()); i++) {
        if(str3[i] == str4[i] && ((str3[i] >= 'a' && str3[i] <= 'z') || (str3[i] >= 'A' && str3[i] <= 'Z'))) {
            res3 = i;
            break;
        }
    }
    // cout << res1 << " " << res2 << " " << res3 << endl;
    cout << v[res1] << " ";
    printf("%02d:%02d\n", res2, res3);
    return 0;
}