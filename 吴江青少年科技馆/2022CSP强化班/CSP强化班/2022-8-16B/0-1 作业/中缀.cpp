#include<bits/stdc++.h>
using namespace std;
float Mid(istringstream &sin)
{
	stack<float>s;
	float x;
	sin>>x;
	s.push(x);
	while(!sin.eof())
	{
		char op;
		sin>>op;
		if(op=='*')
		{
			float Opd=s.top(),O2;
			sin>>O2;
			s.pop();
			s.push(Opd*O2);
		}
		if(op=='/')
		{
			float Opd=s.top(),O2;
			sin>>O2;
			s.pop();
			s.push(Opd/O2);
		}
		if(op=='+')
		{
			float Opd;
			sin>>Opd;
			s.push(Opd);
		}
		if(op=='-')
		{
			float Opd;
			sin>>Opd;
			s.push(-Opd);
		}
	}
	float sum=0;
	while(!s.empty())
	{
		sum+=s.top();
		s.pop();
	}
	return sum;
}
int main(){
	string s="1 + 5.58 * 3.333 + 5.89 - 1.47 / 1.3";
	istringstream sin(s);
	cout<<Mid(sin);
	return 0;
}
