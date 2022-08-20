#include<iostream>
#include<string>
#include<vector>
using namespace std;
int FindNum(string &s, string &t){
	vector<int> nums(t.length(), 0); // 初始化
	for(int i=0;i<s.length();i++) 
		for(int j=t.length()-1;j>=0;j--)
			if(t[j]==s[i])
				if(j==0)
					nums[j]++;
				else 
					nums[j]+=nums[j-1];
	return nums.back();
}
int main(){
	string s, t;   
	s="APPATTT";
	t="PATT"; 
    cout<<FindNum(s,t)<<endl;
    s="WJCSPWJCSPWJCSP";
    t="CJCSC";//  王老师不会 ????
	cout<<FindNum(s,t)<<endl;
	s="CJCSJCSJCS";
    t="CJCSC";
	cout<<FindNum(s,t)<<endl;
	s="AABBAABB";
    t="ABA";
	cout<<FindNum(s,t)<<endl;
    return 0;
}
