#include <bits/stdc++.h>

using namespace std;
int main() {
    for(int k = 1; k <= 1000; k++) {
        for(int a = 1; a <= 1000; a++) {
            for(int b = 1; b <= 1000; b++) {
                if(a * k + b * k == 297 && k + k * a * b == 693) {
                    cout << "a:" << a << " " << "b:" << b << " " << "k:" << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << "no answer";
    return 0;
}
