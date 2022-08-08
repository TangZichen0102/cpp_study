#include<iostream>
using namespace std;
int main()
{
    bool a[101]={0};
    int n,m,i,f=0,t=0,s=0;
    cin>>n>>m;
    do
    {
        ++t;
        if(t>n)
            t=1;
        if(!a[t])
            s++;
        if(s==m)
        {
            s=0;
            a[t]=1;
            f++;
        }
    }while(f!=n);
    cout<<t;
}
