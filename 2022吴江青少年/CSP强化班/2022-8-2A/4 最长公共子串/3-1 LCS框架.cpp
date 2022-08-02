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
// ���غ��������ֿ�����ͬ���������������Ͳ�ͬ 
void Output(vector<vector<bool> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<m[i][j]<<"  ";
		cout<<endl;	
	}
} 

// ����������Ӵ��ĳ���
int LCS(string &s1, string &s2)
{
	int m=s1.length(), n=s2.length();
	vector<vector<bool> > M(m, vector<bool>(n,false));
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			M[i][j] = (s1[i]==s2[j]);
	Output(M);
	// ���m+n-1���Խ��� 
	int maxlen=0;
	for(int i=0; i<m+n-1; i++) 
	{
		// ��ȡ�Խ�������
		vector<bool> D;
		//....... ????
		// ��D�е������True�ĳ���
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
