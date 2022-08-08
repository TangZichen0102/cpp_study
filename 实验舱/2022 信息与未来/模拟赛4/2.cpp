#include <bits/stdc++.h>

using namespace std;
int n, m;
int main() {
    cin >> n >> m;
    for(int i = 3; i <= m; i++)
        for(int j = i; j <= m; j++)
            for(int k = j; k <= m; k++) {
                double sum1 = 1.0 / i, sum2 = 1.0 / j, sum3 = 1.0 / k, sum4 = 3.0 / n;
                if(sum1 + sum2 + sum3 == sum4 && i % 2 == 1 && j % 2 == 1 && k % 2 == 1) {
                    cout << i << " " << j << " " << k;
                    return 0;
                }
            }
    cout << "No solution in 3 ~ " << m << ".";
    return 0;
}