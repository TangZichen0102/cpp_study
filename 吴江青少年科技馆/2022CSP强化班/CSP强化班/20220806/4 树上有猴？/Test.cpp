#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("data.txt","r",.stdin);
	int n, w;  // 上下树n次， 任何时刻猴子数量<=w 
    cin >> n >> w;
    int min=0, max=w;  // 初始化 
    for(int i=0; i<n; i++)
    {
    	int x; cin>>x;
		// x的影响    	
		// x的累加值的影响    	
	}
    cout << max-min+1 << endl;
    return 0;
}
