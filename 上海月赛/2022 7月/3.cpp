#include <bits/stdc++.h>

using namespace std;
int m[5];
int a;
int main() {
#ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
#endif
    while(cin >> a) m[a]++;
    int sum = 0;

    //1、3
    int cnt = min(m[3], m[1]);
    // cout << cnt << endl;
    sum += cnt;
    m[3] -= cnt, m[1] -= cnt;


    //2
    cnt = m[2] / 2;
    // cout << cnt << endl;
    sum += cnt;
    m[2] = m[2] % 2;

    //4个1
    if(m[1] >= 4) {
        int cnt = m[1] / 4;
        // cout << cnt << endl;
        sum += cnt;
        m[1] %= 4;
    } 
    //1、1、2
    if(m[1] >= 2 && m[2] >= 1) {
        int cnt1 = m[1] / 2;
        int cnt2 =
    m[2];
        int minn = min(cnt1, cnt2);
        // cout << minn;
        sum += minn;
        m[1] -= minn * 2;
        m[2] -= minn;
    }


    // cout << m[1] << " " << m[2] << " " << m[3] << " " << m[4] << " " << sum << endl;
    cout << sum + m[1] + m[2] + m[3] + m[4];
    return 0;
}