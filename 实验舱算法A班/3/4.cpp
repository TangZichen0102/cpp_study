#include <bits/stdc++.h>

using namespace std;
char c[7005][7005];
int n, m, k;
int main() {
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) c[i][j] = 'B';
    for(int i = 0; i < k; i++) {
        char d;
        int a;
        cin >> d >> a;
        a = a - 1;
        if(d == 'R')
            for(int j = 0; j < m; j++)
                if(c[a][j] == 'B') c[a][j] = 'G';
                else c[a][j] = 'B';
        else
            for(int j = 0; j < n; j++)
                if(c[j][a] == 'B') c[j][a] = 'G';
                else c[j][a] = 'B';
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(c[i][j] == 'G') sum++;
    cout << sum;
    return 0;
}