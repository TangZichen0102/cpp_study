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
// ����v�У�������true�ĳ��� �����ֵ 
// v: 1 1 0 0 1 1 1 0 1 0 1 1 1 1 0 0
int GetMaxLen(vector<bool> &v)
{
	int len=0, maxlen=0;
	for(int i=0; i<v.size(); i++)
	{
		if(v[i]==true) 
		{
			len++;
			if(len>maxlen)
				maxlen=len;
		}
		else
			len=0;
	}
	return maxlen; 
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
		int len=GetMaxLen(D);  
		//cout<<k<<" "<<len<<endl;
		//Output(D);
		if(len>maxlen)
			maxlen=len;
	}
	return maxlen;
}
void Test()
{
	vector<bool> v(10,true);
	v[2]=false;
	//v[6]=false;
	cout<<GetMaxLen(v)<<endl;
}
int main()
{
	string s1=    "gabadfgab";
	string s2="sgabacbadfgbacst";
	cout<<LCS(s1,s2)<<endl;
	return 0;
}
