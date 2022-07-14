#include <bits/stdc++.h>

using namespace std;
int sum = 0;
int flag;
int n;
int main() {
    cin >>n;
    for(int i = 1; i <= n; i++) {
        if(!flag) {
            sum += i;
        }
        else {
            sum -= i;
        }
        flag = !flag;
    }
    cout <<sum;
    return 0;
}