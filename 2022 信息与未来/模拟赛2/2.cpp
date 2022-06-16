#include <bits/stdc++.h>

using namespace std;
int n;
map<string, char> m;
int main() {
    cin >> n;
    m[".-"] = 'A';
    m["-..."] = 'B';
    m["-.-."] = 'C';
    m["-.."] = 'D';
    m["."] = 'E';
    m["..-."] = 'F';
    m["--."] = 'G';
    m["...."] = 'H';
    m[".."] = 'I';
    m[".---"] = 'J';
    m["-.-"] = 'K';
    m[".-.."] = 'L';
    m["--"] = 'M';
    m["-."] = 'N';
    m["---"] = 'O';
    m[".--."] = 'P';
    m["--.-"] = 'Q';
    m[".-."] = 'R';
    m["..."] = 'S';
    m["-"] = 'T';
    m["..-"] = 'U';
    m["...-"] = 'V';
    m[".--"] = 'W';
    m["-..-"] = 'X';
    m["-.--"] = 'Y';
    m["--.."] = 'Z';
    while(n--) {
        string s;
        cin >> s;
        cout << m[s];
    }
    return 0;
}