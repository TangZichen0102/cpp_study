#include <iostream> 
#include <vector> 
#include <stack> 
using namespace std;

struct Result
{
	int flag;   // 0匹配  1左括号多  -1右括号多 
	int index;  // 多余的左右括号的下标 
};
Result Match(string &s)
{
	Result r;
	stack<int> S; // 存储左括号的下标 
	for(int i=0; i<s.length(); i++) 
	{
		if(s[i]=='(')   S.push(i);
		if(s[i]==')')
		{
			if(  S.empty() )
			{
				r.flag=-1; r.index=i;  return r;   // 右括号多 
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
	//string s="(()(())((()))";    // 左括号多 
	//string s="()(()))((()))";     // 右括号多 
	//string s=")()(";     // 右括号多 
	Result r=Match(s); 
	return 0;
}

