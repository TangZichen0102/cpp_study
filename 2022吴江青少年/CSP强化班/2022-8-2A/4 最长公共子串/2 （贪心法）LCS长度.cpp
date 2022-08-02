#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std;

// 返回最长公共子串的长度
int LCS(string &s1, string &s2)
{
	int n=s1.length();
	for(int len=n; len>=1; len--)
	{
		for(int si=0; si+len-1<n; si++)  // si+len-1<n ！！！ 
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
性能分析：
s1,s2的长度=1000   子串的个数 500500    子串的find的基本操作次数： 1000 
s1,s2的长度=10000   子串的个数 50005000
 
 */ 
int main()
{
	string s1="sgabacbadfgbacst";
	string s2=    "gabadfgab";
	cout<<LCS(s1,s2)<<endl;
	return 0;
}
