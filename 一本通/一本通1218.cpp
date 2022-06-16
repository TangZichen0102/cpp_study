#include <bits/stdc++.h>
using namespace std;
int a, b;
bool check(int a, int b) {
    if(a < b) swap(a, b);
    if(a % b == 0) return true;
    for(int i = a / b; i >= 1; i--) 
        if(check(a - b * i, b) == false) return true;
    return false;
}
int main() {
    while(cin >> a >> b) {
        if(a == 0 && b == 0) return 0;
        if(check(a, b)) cout << "win" << endl;
        else cout << "lose";
    }
    return 0;
}