#include <bits/stdc++.h>

using namespace std;
string name, idx;
int n, age;
int maxage = -10, minage = 101;
string minname, minidx;
string maxname, maxidx;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name >> idx >> age;
        if(age > maxage) {
            maxage = age;
            maxname = name;
            maxidx = idx;
        }
        if(age < minage) {
            minage = age;
            minname = name;
            minidx = idx;
        }
    }
    cout << maxname << " " << maxidx << endl;
    cout << minname << " " << minidx << endl;
    return 0;
}