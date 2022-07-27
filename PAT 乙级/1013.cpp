#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1000005;
bool prime[MAXN];
vector<int> v;
void is_prime() {
    for(int i = 0; i < MAXN; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for(int i = 0; i < MAXN; i++)
        if(prime[i])  {
            v.push_back(i);
            for(int j = i + i; j < MAXN; j += i) prime[j] = false;
        }
}
int main() {
    is_prime();
    int n, m;
    cin >> n >> m;
    int cnt = 1;
    for(int i = n - 1; i < m - 1; i++) {
        if(cnt % 10 == 0) cout << v[i] << endl;
        else cout << v[i] << " "; 
        cnt++;
    }
    cout << v[m - 1];
    return 0;
}