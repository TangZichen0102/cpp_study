#include  <iostream>
using namespace std;

int main()
{
	//freopen("1.txt", "r", stdin);
	int n;  cin>>n;
	int max,cnt;  
	cin>>max;  cnt=1;
	for(int i=2; i<=n; i++)
	{
		int x;  cin>>x;
		if(x==max)
			cnt++;
		else
			if(x>max)
				max=x, cnt=1;
	}
	cout<<max<<" "<<cnt<<endl;
	return 0;
}






