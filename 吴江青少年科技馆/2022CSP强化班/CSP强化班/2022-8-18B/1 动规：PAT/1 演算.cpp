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

