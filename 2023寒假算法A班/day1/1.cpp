#include <bits/stdc++.h>

using namespace std;
int k, n = 4;
int a[10][10];
int main() {
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    cin >> k;
    if(k == 0) {
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = 1; j <= n - 1; j++)
                    if(a[i][j + 1] == 0) a[i][j + 1] = a[i][j], a[i][j] = 0;
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = n; j >= 2; j--)
                    if(a[i][j] == a[i][j - 1]) a[i][j - 1] *= 2, a[i][j] = 0;
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = 1; j <= n - 1; j++)
                    if(a[i][j + 1] == 0) a[i][j + 1] = a[i][j], a[i][j] = 0;
    }
    if(k == 1) {
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = 1; j <= n - 1; j++)
                    if(a[j + 1][i] == 0) a[j + 1][i] = a[j][i], a[j][i] = 0;
        for(int i = 1; i <= n; i++) 
            for(int k = 1; k <= 4; k++)
                for(int j = n; j >= 2; j--)
                    if(a[j][i] == a[j - 1][i]) a[j - 1][i] *= 2, a[j][i] = 0;
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = 1; j <= n - 1; j++)
                    if(a[j + 1][i] == 0) a[j + 1][i] = a[j][i], a[j][i] = 0;
    }
    if(k == 2) {
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = n; j >= 2; j--)
                    if(a[i][j - 1] == 0) a[i][j - 1] = a[i][j], a[i][j] = 0;
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = 1; j <= n - 1; j++)
                    if(a[i][j] == a[i][j + 1]) a[i][j + 1] *= 2, a[i][j] = 0;
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = n; j >= 2; j--)
                    if(a[i][j - 1] == 0) a[i][j - 1] = a[i][j], a[i][j] = 0;
    }
    if(k == 3) {
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = n; j >= 2; j--)
                    if(a[j - 1][i] == 0) a[j - 1][i] = a[j][i], a[j][i] = 0;
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = 1; j <= n - 1; j++)
                    if(a[j][i] == a[j + 1][i]) a[j + 1][i] *= 2, a[j][i] = 0;
        for(int i = 1; i <= n; i++)
            for(int k = 1; k <= 4; k++)
                for(int j = n; j >= 2; j--)
                    if(a[j - 1][i] == 0) a[j - 1][i] = a[j][i], a[j][i] = 0;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}