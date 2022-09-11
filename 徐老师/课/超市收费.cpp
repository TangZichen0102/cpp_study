#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int num = 0;
	float n, sumone, sum;
	bool flag = true;
	sum = 0.0;
	while(flag)
	{
		sumone = 0.0;
	    do
		{
			cin >> n;
			if(n == -1)
			{
				flag = false;
				break;
			}
			sumone += n;
		}
		while(n != 0);
		cout << "当前同学因付的贷款；";
		cout << sumone << endl;
		if(sumone != 0)
		{
			num++;
		}
		sum += sumone;
	}
	cout << "今天的营业额：" << sum << endl;
	cout << "今天换购的人数；" << num << endl;
	return 0;
}
