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
	stack<int> Opd; // ������ջ
	for(int i=0; i<s.length(); i++) 
	{
		if(s[i]>='0' && s[i]<='9')
			; // ��ջ
		else
		{
			// ��ջ�õ�opd2 
			// ��ջ�õ�opd1
			int x=Cal(opd1, s[i], opd2); 
			// ��ջ 
		} 
	}
	return  ջ��ֵ; 
}

int main()
{
	//string s="5";   // 5
	//string s="35+";   // 8
	string s="352*+";  // 13 
	string s="123456789++++++++";  // 45
	//string s="35+2*";  // 16 
	cout<<val(s)<<endl;
	return 0;
}

