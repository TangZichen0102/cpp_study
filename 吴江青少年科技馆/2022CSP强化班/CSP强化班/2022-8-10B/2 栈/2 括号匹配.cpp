#include <iostream> 
#include <vector> 
#include <stack> 
using namespace std;

int Match(string &s)
{
	int cnt=0;  // ��δƥ��������ŵĸ��� 
	for(int i=0; i<s.length(); i++) 
	{
		if(s[i]=='(')   cnt++;
		if(s[i]==')')
		{
			if(cnt==0)
				return -1;   // �����Ŷ� 
			cnt--;
		}
	}
	return cnt; 
}

int main()
{
	string s="()(())((()))" ; 
	//string s="(()(())((()))";    // �����Ŷ� 
	//string s="()(()))((()))";     // �����Ŷ� 
	//string s=")()(";     // �����Ŷ� 
	int flag=Match(s); // 0ƥ��  1�����Ŷ�  -1�����Ŷ� 
	return 0;
}

