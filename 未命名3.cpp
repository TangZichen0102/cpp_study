#include <bits/stdc++.h>

using namespace std;
struct node {
    string x;
    int num, len;
} s[25];

bool cmp(const node &a, const node &b) {
    if (a.len != b.len) return a.len > b.len;
    else return a.x > b.x;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i].x;
        s[i].num = i;
        s[i].len = s[i].x.size();
    }
    sort(s + 1, s + n + 1, cmp);
    cout << s[1].num << endl;
    cout << s[1].x << endl;
    return 0;
}
