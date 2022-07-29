#include <bits/stdc++.h>

using namespace std;
struct student{
    string name;
    int a;
}S[10005];
int cnt[10005];
int n, k;
bool cmp(student a, student b) {
    if(a.a == b.a) return a.name < b.name;
    return a.a > b.a;
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >>S[i].name >> S[i].a;
    sort(S, S + n, cmp);
    for(int i = 0; i < k; i++) cnt[i] = n / k;
    cnt[k - 1] += n % k;
    int idx = 0;
    for(int i = k - 1; i >= 0; i--) {
        string temp = S[idx++].name;
        int flag = 0;
        for(int j = 2; j <= cnt[i]; j++) {
            if(flag == 0) temp = S[idx++].name + " " + temp, flag = 1;
            else temp = temp + " " + S[idx++].name, flag = 0;
        }
        cout << temp << endl;
    }
    return 0;
}