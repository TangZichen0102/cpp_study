#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

string dp1 = "0123456789abcdefghijklmnopqrstuvwxyz";

map<char, int> dp2 = {
    {'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}, {'G', 16}, {'H', 17}, {'I', 18}, {'J', 19}, {'K', 20}, {'L', 21}, {'M', 22}, {'N', 23}, {'O', 24}, {'P', 25}, {'Q', 26}, {'R', 27}, {'S', 28}, {'T', 29}, {'U', 30}, {'V', 31}, {'W', 32}, {'X', 33}, {'Y', 34}, {'Z', 35}};
long long qmi(long long a, int k)
{
    long long res = 1;
    while (k)
    {
        if (k & 1) res = (LL)res * a;
        k >>= 1, a = (LL)a * a;
    }
    return res;
}
string _Itoa(long long n, int m)
{
    string _s;
    while (n)
    {
        int t = n % m;
        _s += dp1[t];
        n /= m;
    }
    reverse(_s.begin(), _s.end());
    return _s;
}

int M, N;
string n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("3.in", "r", stdin);
    // #endif
    while (cin >> M >> N >> n)
    {
        int l = n.size();
        unsigned long long ans = 0;
        for (int i = l - 1, j = 0; i >= 0; i--, j++)
        {
            // cout << n[i];
            ans += dp2[n[i]] * qmi(M, j);
            // cout << ans << endl;
        }
        // cout << ans << endl;
        cout << _Itoa(ans, N) << endl;
    }

    return 0;
}