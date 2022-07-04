#include<bits/stdc++.h>

using namespace std;
int main() {
    string s;
    cin >> s;
    if(s.size() == 1)
        for(int i = 1; i <= s[0] - '0'; i++) cout << i;
    else if(s.size() == 2) {
        for(int i = 1; i <= s[0] - '0'; i++) cout << 'S';
        for(int i = 1; i <= s[1] - '0'; i++) cout << i;
    }
    else{
        for(int i = 1; i <= s[0] - '0'; i++) cout << 'B';
        for(int i = 1; i <= s[1] - '0'; i++) cout << 'S';
        for(int i = 1; i <= s[2] - '0'; i++) cout << i;
    }
    return 0;
}