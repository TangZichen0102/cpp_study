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

int val(string &s)
{
	return s[0]-'0';
}

int main()
{
	string s="5";   // 5
	//string s="+35";   // 8
	//string s="+3*52";  // 13 
	//string s="*+352";  // 16 
	cout<<val(s)<<endl;
	return 0;
}





