#include <iostream>
using namespace std;

const int NUM = 5;

int r(int n)
{
    int i;
    if (n <= NUM)
        return n;
    for (i = 1; i <= NUM; i++)
        if (r(n - i) < 0)
            return i;
    return -1;
}

int main()
{
    int n;
        
    cin>>n;
    cout<<r(n)<<endl;
    return 0;
}