#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("data.txt","r",.stdin);
	int n, w;  // ������n�Σ� �κ�ʱ�̺�������<=w 
    cin >> n >> w;
    int min=0, max=w;  // ��ʼ�� 
    for(int i=0; i<n; i++)
    {
    	int x; cin>>x;
		// x��Ӱ��    	
		// x���ۼ�ֵ��Ӱ��    	
	}
    cout << max-min+1 << endl;
    return 0;
}
