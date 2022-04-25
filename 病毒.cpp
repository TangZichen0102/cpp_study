#include <bits/stdc++.h>

using namespace std;
string a[50001], b;
int r[27], ch[27], mapp[27][27], ans[27], team[27], zhen, erzi;
int aaa[27];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        for (int j = 0; j < a[i].size(); j++)
            if (!aaa[a[i][j] - 96]) {
                aaa[a[i][j] - 96] = 1;
                erzi++;
            }
    }
    cin >> b;
    for (int i = 0; i < b.size(); i++)
        if (!aaa[b[i] - 96]) {
            cout << 0 << endl;
            return 0;
        }
    for (int i = 1; i < n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            for (int k = 0; k < min(a[i].size(), a[j].size()); k++)
                if (a[i][k] != a[j][k]) {
                    r[(int) a[j][k] - 96]++;
                    ch[(int) a[i][k] - 96]++;
                    mapp[(int) a[i][k] - 96][ch[(int) a[j][k] - 96]] = (int) a[j][k] - 96;
                    break;
                }
    for (int i = 0; i <= 26; i++)
        if (r[i] == 0 && aaa[i])
            team[++zhen] = i;
    int jj = 1;
    while (zhen < erzi) {
        if (jj > zhen || zhen - jj > 0) {
            cout << 0;
            return 0;
        }
        int temp = team[jj];
        jj++;
        for (int i = 1; i <= ch[temp]; i++) {
            r[mapp[temp][i]]--;
            if (r[mapp[temp][i]] == 0) team[++zhen] = mapp[temp][i];
        }
    }
    for (int i = 1; i <= zhen; i++) ans[team[i]] = i;
    for (int i = 0; i < b.length(); i++)
        if (ans[(int) b[i] - 96] == 0) {
            cout << 0 << endl;
            return 0;
        }
    for (int i = 0; i < b.length(); i++) cout << (char) (ans[(int) b[i] - 96] + 96);
    return 0;
}
