#include<iostream>
#include<string>
using namespace std;
// 查找特定子序列PAT的个数 
/*
        A P P A A T T A P P  A  P  T  T
P  =0     1 2           3 4     5
PA =0         2 4     6     10 
PAT=0             4 8             18 28
*/
int FindNum(string &s)
{
	int P=0, PA=0, PAT=0;
	for(int i=0; i<s.length(); i++) 
	{
		if(s[i]=='P')  P  +=1;
		if(s[i]=='A')  PA +=P;
		if(s[i]=='T')  PAT+=PA;
	}
	return PAT;
}

int main()
{
	string s;    // cin>>s;  
	//s="APPAPT";     // 2
	//s="APPAPTT";    // 4
	//s="APPAATT";    // 8
	s="APPAATTAPPAPTT";    // 80  28  20
    cout<<FindNum(s)<<endl;
    return 0;
}

