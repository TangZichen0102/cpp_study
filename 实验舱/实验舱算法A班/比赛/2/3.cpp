#include <bits/stdc++.h> 

using namespace std;
int n, sum;
int main() {
    cin >> n;
    for(int i = 0; i <= n / 7; i++)
        if((n - 7 * i) % 4 == 0) sum++;
    cout << sum;
    return 0;
}