#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100
void solve(char first[], int spos_f, int epos_f, char mid[], int spos_m, int epos_m) {
    int i, root_m;
    if (spos_f > epos_f)
        return;
    for (i = spos_m; i <= epos_m; i++)
        if (first[spos_f] == mid[i]) {
            root_m = i;
            break;
        }
    solve(first, spos_f + 1, spos_f + (root_m - spos_m), mid, spos_m, root_m - 1);
    solve(first, spos_f + (root_m - spos_m) + 1, epos_f, mid, root_m + 1, epos_m);
    cout << first[spos_f];
}
int main(void) {
    char first[MAX], mid[MAX];
    int len;
    cin >> len;
    cin >> first >> mid;
    solve(first, 0, len - 1, mid, 0, len - 1);
    cout << endl;
    return 0;
}