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

// ����v�У�������true�ĳ��� �����ֵ ��  ��������е����
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
	int maxlen=0,maxk,maxs;
	for(int k=-(m-1); k<n; k++) 
	{
		// ��ȡ�Խ�������
		vector<bool> D;
		int i,j;  // �Խ��ߵ�������� 
		if(k>=0)
			i=0, j=k;  // ����ڵ�0�� 
		else 
			i=-k, j=0;  // ����ڵ�0�� 
		while( i<m && j<n )
		{
			D.push_back(M[i][j]);
			i++,j++; 
		}	
		// ��D�е������True�ĳ���
		int len,s; 
		GetMaxLen(D, len, s); 
		if(len>maxlen)
		{
			maxlen=len;
			maxk  =k;
			maxs  =s;
		}
	}
	
	//��ظ��Ӵ��ڵ�maxk���Խ��ߵĵ�maxs��λ�ã�����Ϊmaxlen 
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
