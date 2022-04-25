#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool isoff[5100] = {};
    int n = 0;
    int m = 0;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        for(int j = i; j <= n; j += i)
        {
            isoff[j] = !isoff[j];
        }
    }
    int arr[5100] = {};
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(isoff[i])
        {
            arr[count] = i;
            count++;
        }
    }
    if(count > 0)
    {
        cout << arr[0];
    }
    for(int i = 1; i < count; i++)
    {
        cout << "," << arr[i];
    }    
    return 0;
}
