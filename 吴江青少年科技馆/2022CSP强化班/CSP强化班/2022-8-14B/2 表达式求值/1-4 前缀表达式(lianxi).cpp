#include <iostream> 
#include <iomanip> 
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
// 从s[si]出发求值 
int val(string &s,int &si)
{
	char c=s[si]; si++;


}

int main()
{
	//string s="5";   // 5
	//string s="+35";   // 8
	string s="+3*52";  // 13 
	//string s="*+352";  // 16 
	int si=0;   // 全程的下标 
	cout<<val(s, si)<<endl;
	return 0;
}
/*
	string s="+3*52";  // 13 
                  V(0)
            V(1)       V(2)
                     V(3) V(4)

	//string s="*+352";  // 16 
                  V(0)
            V(1)        V(4)
          V(2) V(3)  

*/




