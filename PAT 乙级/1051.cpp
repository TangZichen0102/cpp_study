#include <bits/stdc++.h>

using namespace std;

int main() {
    double r1, p1, r2, p2, sum1, sum2;
    cin >> r1 >> p1 >> r2 >> p2;
    sum1 = r1 * cos(p1) * r2 * cos(p2) - r1 * sin(p1) * r2 * sin(p2);
    sum2 = r1 * cos(p1) * r2 * sin(p2) + r1 * sin(p1) * r2 * cos(p2);
    if(sum1 + 0.005 >= 0.005 && sum1 < 0) printf("0.00");
    else printf("%.2f", sum1);
    if(sum2 >= 0) printf("+%.2fi", sum2);
    else if(sum2 + 0.005 >= 0 && sum2 < 0) printf("+0.00i");
    else printf("%.2fi", sum2);
    return 0;
}