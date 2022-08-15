#include <bits/stdc++.h>

using namespace std;
string rounddown(string str, int d) {
    return str.substr(0, str.find('.')) + "." + str.substr(str.find('.') + 1, d);
}
string roundHalfUp(string str, int d) {
    if(str[str.find('.') + 1 + d] >= '5') str = caryUp(str, d);
}
int main() {

    return 0;
}