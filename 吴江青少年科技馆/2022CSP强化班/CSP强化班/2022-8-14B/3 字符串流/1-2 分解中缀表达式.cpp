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

int main()
{
	string s="3.1+5.12*2.12+5.1*2.1+5.1*2.11+5.1*2.11";
	istringstream sin(s);
	cout<<val(sin)<<endl;
	return 0;
}

