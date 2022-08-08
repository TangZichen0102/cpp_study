#include <bits/stdc++.h>

using namespace std;
char c[15];
int len, s, t;
int main()
{
    cin >> t;
    while (t--) {
        cin >> c >> s;
        len = strlen(c);
        while (s--) {
            for (int i = 0; i <= len - 2; i++)
                if (c[i] > c[i + 1]) {
                    for (int j = i; j <= len - 2; j++) c[j] = c[j + 1];
                    break;
                }
            len--;
        }
        int i = 0;
        while (i <= len - 1 && c[i] == '0') i++;
        if (i == len) cout << 0;
        else
            for (int j = i; j <= len - 1; j++) cout << c[j];
        cout << endl;
    }
    return 0;
}