#include <iostream> 
#include <iomanip> 
#include <sstream> 
using namespace std;

float Cal(float d1, char op, float d2)
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
	string word; sin>>word;
	if(word[0]>='0' && word[0]<='9')
	{
		istringstream win(word);
		float x; win>>x;
		return x;
	}
	else
	{
		float d1=val(sin);
		float d2=val(sin);
		float d=Cal(d1, word[0], d2);
		return d;
	}
}

int main()
{
	//string s="+ 3.1 * 5.12 10";
	string s="+ 103.1 * 5.12 10";
	istringstream sin(s);
	cout<<val(sin)<<endl;
	return 0;
}

