#include <iostream> 
#include <iomanip> 
#include <sstream> 
#include <stack>
using namespace std;

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
float val(istringstream &sin)
{
	float x;	sin>>x;
	cout<<x<<endl;
	while(  !sin.eof() )
	{
		char op; sin>>op>>x;
		cout<<op<<"  "<<x<<endl;
	} 
	return 0;
}
// 从sin中分解单词，对单词的首字母进行分辨，运算符、运算数（再一次转换为float） 
int main()
{
	string s="+ 3.1 * 5.12 10";
	istringstream sin(s);
	cout<<val(sin)<<endl;
	return 0;
}

