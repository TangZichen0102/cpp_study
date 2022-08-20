#include<bits/stdc++.h>
using namespace std;
float Count(float a, char op, float b)
{
	if(op == '+')
		return a+b;
	if(op == '-')
		return a-b;
	if(op == '*')
		return a*b;
	if(op == '/')
		return a/b;
	return 0;
}
float Front(istringstream &sin)
{
	string s;
	sin>>s;
	if(s.size()==1 && !isdigit(s[0]))
		return Count(Front(sin),s[0],Front(sin));
	istringstream ssin(s);
	float x;
	ssin>>x;
	return x;
}
float Back(istringstream &sin)
{
	stack<float>st;
	string s;
	while(!sin.eof())
	{
		sin>>s;
		if(s.size()==1 && !isdigit(s[0]))
		{
			float a,b;
			a=st.top();
			st.pop();
			b=st.top();
			st.pop();
			st.push(Count(b, s[0], a));
		}
		else
		{
			istringstream ssin(s);
			float x;
			ssin>>x;
			st.push(x);
		}
	}
	return st.top();
}
int main(){
	string s="+ * 1.56 + 3.56 * 7.88 2.535 4.45";
	istringstream sin(s);
	cout<<Front(sin)<<endl;
	string s1="2.857 1.14 5.14 * - 7.892 8.889 + *";
	istringstream sin1(s1);
	cout<<Back(sin1)<<endl;
	return 0;
}
