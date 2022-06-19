#include <bits/stdc++.h>

using namespace std;
int n, m, k;
struct node {
    int x, y;
    char name, flag;
}a[55];
string Map[55];
int main() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) Map[i][j] = '.';
    }
    cin >> n >> m >> k;
    for(int i = 0; i < k; i++) {
        cin >> a[i].x >> a[i].y >> a[i].name >> a[i].flag;
        if(a[i].flag == 'R') 
            for(int j = a[i].y - 1; j < m; j++) Map[a[i].x - 1][j] = a[i].name;
        else if(a[i].flag == 'U')
            for(int j = a[i].x - 1; j >= 0; j--) Map[j][a[i].y - 1] = a[i].name; 
        else if(a[i].flag == 'L')
            for(int j = a[i].y - 1; j >= 0; j--) Map[a[i].x - 1][j] = a[i].name;
        else
            for(int j = a[i].x - 1; j < n; j++) Map[j][a[i].x - 1] = a[i].name;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(Map[i][j] != '.') cout << Map[i][j] << " ";
            else cout << '.' << " ";
        }
        cout << endl;
    } 
    return 0;
}