#include <bits/stdc++.h>

using namespace std;
struct stu{
    string zh;
    int kz;
}Stu[1005];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a;
        int b, c;
        cin >> a >> b >> c;
        Stu[b].zh = a, Stu[b].kz = c;
    }
    int m;
    cin >> m;
    while(m--) {
        int x;
        cin >> x;
        cout << Stu[x].zh << " " << Stu[x].kz << endl;
    }
    return 0;
}