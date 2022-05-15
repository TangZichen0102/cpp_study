#include <bits/stdc++.h>

using namespace std;
string ch1, ch2;
int n;

int main()
{
    cin >> ch1 >> ch2;
    n = ch1.size();
    cout << ch1[0];
    for (int i = 1; i < n; i++)
        if (ch1[i] < ch2[0])
            cout << ch1[i];
        else
            break;
    cout << ch2[0];
    return 0;
}