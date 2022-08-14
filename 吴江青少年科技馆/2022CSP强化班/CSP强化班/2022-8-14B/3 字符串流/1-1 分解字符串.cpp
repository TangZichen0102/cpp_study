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
int val(string &s)
{
}

int main()
{
	string s="3.1+5.12*2.12+5.1*2.1+5.1*2.11+5.1*2.11";
	istringstream sin(s);
	float x;	sin>>x;
	cout<<x;
	char op; sin>>op;
	sin>>x;
	cout<<op<<"  "<<x<<endl;
	//cout<<val(s)<<endl;
	return 0;
}

