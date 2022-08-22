#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        unsigned int a,cnt=0;
        int b;
        cin>>a>>b;
	    if(a % abs(b) != 0 || b == 0) {
	    	cout << "NO";
            return 0;
        }
        while(a!=0)a+=b;
        cout<<"YES";
    }
    return 0;
}