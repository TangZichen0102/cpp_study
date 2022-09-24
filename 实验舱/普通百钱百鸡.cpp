#include <bits/stdc++.h> 

using namespace std;
int n;
int main() {
    cin >> n;
    for(int i = 1; i <= n / 7; i++)
        if((n - 7 * i) % 4 == 0) {
            int x = i, y = (n - 7 * i) / 4, z = n - x - y;
            if(x != 0 && y != 0 && z != 0) 
                printf("%d %d %d\n", x, y, z);
        }
    return 0;
}