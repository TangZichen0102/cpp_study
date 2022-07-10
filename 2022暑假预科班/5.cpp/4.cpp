#include <bits/stdc++.h>

using namespace std;
int p[4][5] = {{461, 431, 420, 0},
               {100, 57, 70, 0}, 
               {130, 160, 118, 0}, 
               {167, 266, 75, 0}
};
int sum = 0;
int main() {
    for(int i = 0; i < 4; i++) {
        int _t;
        cin >> _t;
        sum += p[i][_t - 1];
    }
    cout << sum;
    return 0;
}