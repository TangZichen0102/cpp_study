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
		cout << "��ǰͬѧ�򸶵Ĵ��";
		cout << sumone << endl;
		if(sumone != 0)
		{
			num++;
		}
		sum += sumone;
	}
	cout << "�����Ӫҵ�" << sum << endl;
	cout << "���컻����������" << num << endl;
	return 0;
}
