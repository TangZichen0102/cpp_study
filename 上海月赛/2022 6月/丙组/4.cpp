#include <bits/stdc++.h>

using namespace std;
int n, k;
string s;
int minn;
int sum;
int main()
{
    cin >> n >> k;
    cin >> s;
    for(int i = 0; i < k; i++)
        if(s[i] == '1') sum++;
    minn = sum;
    for (int i = 1; i < n - k + 1; i++)
    {
        if(s[i - 1] == '1') sum--;
        if(s[i + k - 1] == '1') sum++;
        minn = min(minn, sum);
        if (minn == 0) break;
    }
    cout << minn;
    return 0;
}
