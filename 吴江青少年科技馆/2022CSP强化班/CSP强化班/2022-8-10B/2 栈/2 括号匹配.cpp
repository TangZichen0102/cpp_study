#include <iostream> 
#include <vector> 
#include <stack> 
using namespace std;

int Match(string &s)
{
	int cnt=0;  // ÉĞÎ´Æ¥ÅäµÄ×óÀ¨ºÅµÄ¸öÊı 
	for(int i=0; i<s.length(); i++) 
	{
		if(s[i]=='(')   cnt++;
		if(s[i]==')')
		{
			if(cnt==0)
				return -1;   // ÓÒÀ¨ºÅ¶à 
			cnt--;
		}
	}
	return cnt; 
}

int main()
{
	string s="()(())((()))" ; 
	//string s="(()(())((()))";    // ×óÀ¨ºÅ¶à 
	//string s="()(()))((()))";     // ÓÒÀ¨ºÅ¶à 
	//string s=")()(";     // ÓÒÀ¨ºÅ¶à 
	int flag=Match(s); // 0Æ¥Åä  1×óÀ¨ºÅ¶à  -1ÓÒÀ¨ºÅ¶à 
	return 0;
}

