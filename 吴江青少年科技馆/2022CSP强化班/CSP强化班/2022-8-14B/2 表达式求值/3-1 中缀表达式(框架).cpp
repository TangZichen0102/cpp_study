#include <iostream> 
#include <iomanip> 
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
	stack<int> Opd;
	Opd.push(s[0]-'0') ;
	for(int i=1; i<s.length(); )
	{
		char op=s[i]; i++;    // ÔËËã·û 
		int  x=s[i]-'0'; i++; // ÔËËãÊý
		if(op=='+') 
			Opd.push(x) ;
		if(op=='*') 
		{
			int x1=Opd.top(); Opd.pop();
			x=Cal(x1,op,x);
			Opd.push(x);
		}
	}
	int sum=0;
	while( !Opd.empty() )
	{
		sum +=Opd.top(); Opd.pop();
	}
	return sum;
}

int main()
{
	//string s="5";   // 5
	//string s="3+5";   // 8
	//string s="3+5*2";  // 13 
	string s="3+5*2+5*2+5*2+5*2";          // 3 10 10
	//string s="3+5*2*2+5*2*2+5*2*2+5*2*2";  // 3 20 20 20 20
	cout<<val(s)<<endl;
	return 0;
}

