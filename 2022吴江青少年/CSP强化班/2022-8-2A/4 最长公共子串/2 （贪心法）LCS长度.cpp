#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std;

// ����������Ӵ��ĳ���
int LCS(string &s1, string &s2)
{
	int n=s1.length();
	for(int len=n; len>=1; len--)
	{
		for(int si=0; si+len-1<n; si++)  // si+len-1<n ������ 
		{
			string key=s1.substr(si, len);
			int k=s2.find(key);
			if(k!=-1)
			{
				cout<<key<<endl;
				return len;
			}
		}
	}
	return 0;
}
 /*
���ܷ�����
s1,s2�ĳ���=1000   �Ӵ��ĸ��� 500500    �Ӵ���find�Ļ������������� 1000 
s1,s2�ĳ���=10000   �Ӵ��ĸ��� 50005000
 
 */ 
int main()
{
	string s1="sgabacbadfgbacst";
	string s2=    "gabadfgab";
	cout<<LCS(s1,s2)<<endl;
	return 0;
}
