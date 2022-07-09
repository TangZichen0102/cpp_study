#include <bits/stdc++.h>

using namespace std;
int cnt = 1;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    while(true) {
        if(sum >= n) {
            cout << cnt - 1;
            return 0;
        }
        sum += cnt++;
    } 
    return 0;
}