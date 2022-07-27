#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    string maxday = "1814/09/06", minday = "2014/09/06";
    string name, birth, lname, sname;
    for(int i = 0; i < n; i++) {
        cin >> name >> birth;
        if(birth >= "1814/09/06" &&  birth <= "2014/09/06") {
            cnt++;
            if(birth >= maxday) maxday = birth, lname = name;
            if(birth <= minday) minday = birth, sname = name;
        }
    }
    cout << cnt;
    if(cnt != 0) cout << " " << sname << " " << lname;
    return 0;
}