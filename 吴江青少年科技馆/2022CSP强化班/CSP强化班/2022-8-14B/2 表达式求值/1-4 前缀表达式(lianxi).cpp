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
// ��s[si]������ֵ 
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
	int si=0;   // ȫ�̵��±� 
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




