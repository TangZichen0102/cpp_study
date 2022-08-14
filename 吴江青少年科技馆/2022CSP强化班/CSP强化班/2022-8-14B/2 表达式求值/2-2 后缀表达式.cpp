#include <iostream> 
#include <iomanip> 
#include <stack> 
using namespace std;
/*
中缀表达式 3+5
         + 
      3    5  
前缀表达式: 先序：+ 3 5     max(a,b)   f(x,y,z)
中缀表达式: 中序：3 + 5
后缀表达式: 后序：3 5 + 

中缀表达式 3+5*2
         + 
      3    *
	      5 2  
前缀表达式: 先序：+ 3 * 5 2
中缀表达式: 中序：3 + 5 * 2
后缀表达式: 后序：3 5 2 * + 

中缀表达式 (3+5)*2
         * 
      +    2
	3  5      
前缀表达式: 先序：* + 3 5 2
中缀表达式: 中序：3 + 5 * 2
后缀表达式: 后序：3 5 + 2 * 
*/
int Cal(int d1, char op, int d2)
{
	switch(op)
	{
		case '+': return d1+d2;
		case '-': return d1-d2;
		case '*': return d1*d2;
		case '/': return d1/d2;
	}
}
int val(string &s)
{
	stack<int> Opd; // 运算数栈
	for(int i=0; i<s.length(); i++) 
	{
		if(s[i]>='0' && s[i]<='9')
			Opd.push(s[i]-'0'); // 进栈
		else
		{
			int opd2=Opd.top(); Opd.pop();// 出栈得到opd2 
			int opd1=Opd.top(); Opd.pop();// 出栈得到opd1
			int x=Cal(opd1, s[i], opd2); 
			Opd.push(x); // 进栈
		} 
	}
	return Opd.top();  //  栈顶值
}

int main()
{
	//string s="5";   // 5
	//string s="35+";   // 8
	//string s="352*+";  // 13 
	string s="123456789++++++++";  // 45
	//string s="35+2*";  // 16 
	cout<<val(s)<<endl;
	return 0;
}

