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

// 计算v中，连续的true的长度 的最大值 并  带出最长序列的起点
void GetMaxLen(vector<bool> &v, int &maxlen, int &maxs)
{
	maxlen=0, maxs=0;
	int len=0,s=0;
	for(int i=0; i<v.size(); i++)
	{
		if(v[i]==true) 
		{
			len++;
			if(len == 1)
				s=i;
		}
		else
		{
			if(len>maxlen)
				maxlen=len, maxs=s;
		
			len=0;
		}
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
	int maxlen=0,maxk,maxs;
	for(int k=-(m-1); k<n; k++) 
	{
		// 提取对角线向量
		vector<bool> D;
		int i,j;  // 对角线的起点坐标 
		if(k>=0)
			i=0, j=k;  // 起点在第0行 
		else 
			i=-k, j=0;  // 起点在第0列 
		while( i<m && j<n )
		{
			D.push_back(M[i][j]);
			i++,j++; 
		}	
		// 求D中的最长连续True的长度
		int len,s; 
		GetMaxLen(D, len, s); 
		if(len>maxlen)
		{
			maxlen=len;
			maxk  =k;
			maxs  =s;
		}
	}
	
	//最长重复子串在第maxk条对角线的第maxs个位置，长度为maxlen 
	string lcs="";
	if(maxk < 0)
		lcs = s1.substr(maxk-maxs,maxlen);
	else
		lcs = s2.substr(maxk+maxs,maxlen);
	cout<<lcs<<" ";
	return maxlen;
}
int main()
{
	string s1=    "gabadfgab";
	string s2="sgabacbadfgbacst";
	cout<<LCS(s1,s2)<<endl;
	return 0;
}
