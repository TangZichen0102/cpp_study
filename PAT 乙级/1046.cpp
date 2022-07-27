#include <bits/stdc++.h>

using namespace std;
void huaquan(int *p_j, int *p_y, int n) {
    while(n-- > 0) {
        int j_han, j_hua;
        cin >> j_han >> j_hua;
        int y_han, y_hua;
        cin >> y_han >> y_hua;
        if(j_hua != y_hua) {
            if(j_hua == j_han + y_han) ++*p_y;
            if(y_hua == j_han + y_han) ++*p_j;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int jia_he = 0, yi_he = 0;
    huaquan(&jia_he, &yi_he, n);
    cout << jia_he << " " << yi_he;
    return 0;
}