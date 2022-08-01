#include <bits/stdc++.h>

using namespace std;
map<char, int> m;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++) 
        if(!m[s1[i]]) cout << s1[i], m[s1[i]] = 1;
    for(int i = 0; i < s2.size(); i++)
        if(!m[s2[i]]) cout << s2[i], m[s2[i]] = 1;
    return 0;
}