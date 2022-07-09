#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    if(n < 500) printf("%.2f", n);
    else if(n >= 500 && n < 1000) printf("%.2f", n * 0.95);
    else if(n >= 1000 && n < 1500) printf("%.2f", n * 0.9);
    else if(n >= 1500 && n < 2000) printf("%.2f", n * 0.85);
    else printf("%.2f", n * 0.8);
    return 0;
}