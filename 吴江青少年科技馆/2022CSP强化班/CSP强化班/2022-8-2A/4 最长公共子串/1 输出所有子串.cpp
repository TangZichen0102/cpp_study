#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std;

//输出所有的子串 
void Output(string &s)
{
	int n=s.length();
	for(int len=1; len<=n; len++)
	{
		for(int si=0; si+len-1<n; si++)  // si+len-1<n ！！！ 
			cout<<s.substr(si, len)<<endl;
		cout<<endl;	
	}
}

int main()
{
	//string s1="sgabacbadfgbacst";
	//string s2=    "gabadfgab";
	string s="0123456789";
	Output(s);
	return 0;
}
