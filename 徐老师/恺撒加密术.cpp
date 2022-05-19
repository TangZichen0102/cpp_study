#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	int n;
	cin >> n;
	string str1, str2;
	getline(cin, str1);
	str2 = "";
	for(int i = 0; i < str1.size(); i++)
	{
		ch = str1[i];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			ch+=n;
			if((ch > 'Z' && ch < 'a') || ch > 'z')
			{
				ch -= 26 + n;
			}
		}
		str2 += ch;
	}
	cout << str2;
	return 0;
}
