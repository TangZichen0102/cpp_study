#include <iostream> 
#include <vector> 
#include <stack> 
using namespace std;

struct Result
{
	int flag;   // 0ƥ��  1�����Ŷ�  -1�����Ŷ� 
	int index;  // ������������ŵ��±� 
};
Result Match(string &s)
{
	Result r;
	stack<int> S; // �洢�����ŵ��±� 
	for(int i=0; i<s.length(); i++) 
	{
		if(s[i]=='(')   S.push(i);
		if(s[i]==')')
		{
			if(  S.empty() )
			{
				r.flag=-1; r.index=i;  return r;   // �����Ŷ� 
			}
			S.pop(); 
		}
	}
	if(  S.empty() )
		r.flag=0;
	else
		r.flag=1, r.index=S.top();
	return r; 
}

int main()
{
	string s="()(())((()))" ; 
	//string s="(()(())((()))";    // �����Ŷ� 
	//string s="()(()))((()))";     // �����Ŷ� 
	//string s=")()(";     // �����Ŷ� 
	Result r=Match(s); 
	return 0;
}

