#include<iostream>
#include<string>
#include<vector>
using namespace std;
// 查找特定子序列PAT的个数 
/*
        A P P A A T T A P P  A  P  T  T
P  =0     1 2           3 4     5
PA =0         2 4     6     10 
PAT=0             4 8             18 28
*/
int FindNum(string &s, string &t)
{
	vector<int> nums(t.length(), 0); // 初始化
	for(int i=0; i<s.length(); i++) 
	{
		int k = t.find(s[i]); 
		if(k==-1)  continue;
		if(k==0)  
			nums[k] += 1;
		else
			nums[k] += nums[k-1];
	}
	return nums.back();
}

int main()
{
	string s, t;    // cin>>s;  
	s="WJCSPWJCSPWJCSPWJCSPWJCSPWJCSP";
	t="WJCSP";  // 1 6 21 56 126 252
	//t="CJCSC";  //  王老师不会 ????
    cout<<FindNum(s,t)<<endl;
    return 0;
}

