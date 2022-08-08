#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std;

void Output(vector<bool> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
} 
// 重载函数：名字可以相同，参数个数、类型不同 
void Output(vector<vector<bool> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<m[i][j]<<"  ";
		cout<<endl;	
	}
} 

// 返回最长公共子串的长度
int LCS(string &s1, string &s2)
{
	int m=s1.length(), n=s2.length();
	vector<vector<bool> > M(m, vector<bool>(n,false));
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			M[i][j] = (s1[i]==s2[j]);
	Output(M);
	// 穷举m+n-1条对角线 
	int maxlen=0;
	for(int i=0; i<m+n-1; i++) 
	{
		// 提取对角线向量
		vector<bool> D;
		//....... ????
		// 求D中的最长连续True的长度
		int len=GetMaxLen(D);  // ????
		if(len>maxlen)
			maxlen=len;
	}
	return maxlen;
}
int main()
{
	string s1=    "gabadfgab";
	string s2="sgabacbadfgbacst";
	cout<<LCS(s1,s2)<<endl;
	return 0;
}
