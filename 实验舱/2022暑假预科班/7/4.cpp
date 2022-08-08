#include <bits/stdc++.h>

using namespace std;
unordered_map<char, char> m;
int main() {
    string s;
    cin >> s;
    //1
    m['q'] = 'w', m['w'] = 'e', m['e'] = 'r', m['r'] = 't';
    m['t'] = 'y', m['y'] = 'u', m['u'] = 'i', m['i'] = 'o';
    m['o'] = 'p', m['p'] = 'q';


    //2
    m['a'] = 's', m['s'] = 'd', m['d'] = 'f', m['f'] = 'g';
    m['g'] = 'h', m['h'] = 'j', m['j'] = 'k', m['k'] = 'l';
    m['l'] = 'a';


    //3
    m['z'] = 'x', m['x'] = 'c', m['c'] = 'v', m['v'] = 'b';
    m['b'] = 'n', m['n'] = 'm', m['m'] = 'z';
    for(int i = 0; i < s.size(); i++) cout << m[s[i]];
    return 0;
}