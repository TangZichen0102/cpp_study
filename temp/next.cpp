#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  cin >> s;
  char c1, c2;
  cin >> c1 >> c2;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == c1) cout << c2;
    else cout << s[i];
  }
  return 0;
}