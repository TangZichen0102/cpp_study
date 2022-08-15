#include <iostream> 
#include <iomanip> 
using namespace std;
/*
��׺���ʽ 3+5
         + 
      3    5  
ǰ׺���ʽ: ����+ 3 5     max(a,b)   f(x,y,z)
��׺���ʽ: ����3 + 5
��׺���ʽ: ����3 5 + 

��׺���ʽ 3+5*2
         + 
      3    *
	      5 2  
ǰ׺���ʽ: ����+ 3 * 5 2
��׺���ʽ: ����3 + 5 * 2
��׺���ʽ: ����3 5 2 * + 

��׺���ʽ (3+5)*2
         * 
      +    2
	3  5      
ǰ׺���ʽ: ����* + 3 5 2
��׺���ʽ: ����3 + 5 * 2
��׺���ʽ: ����3 5 + 2 * 
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
	if(s[0]>='0' && s[0]<='9')
		return s[0]-'0';
	else
	{
		int d1=s[1]-'0';
		int d2=s[2]-'0';
		int d=Cal(d1, s[0], d2);
		return d;
	}
}

int main()
{
	//string s="5";   // 5
	//string s="+35";   // 8
	string s="+3*52";  // 13 
	//string s="*+352";  // 16 
	cout<<val(s)<<endl;
	return 0;
}





