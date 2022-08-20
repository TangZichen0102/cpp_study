#include<iostream>
#include<map>
#include<string>
using namespace std;
// ��Ŀ��
// ����������ת���ɰ���������
void CreateRoman(map<char,int> &m)
{
	m.clear(); 
	m['I']=1 ;
	m['V']=5 ;
	m['X']=10 ;
	m.insert(pair<char,int>('L', 50));
	m.insert(pair<char,int>('C', 100));
	m.insert(pair<char,int>('D', 500));
	m.insert(pair<char,int>('M', 1000));
}
void Output(map<char,int> &m)
{
	map<char, int>::iterator it;
	for(it=m.begin(); it!=m.end(); it++)
		cout<<it->first<<"-"<<it->second<<"\t";
	cout<<endl;
}

// ��ǰ����ɨ�裬��һ��Ans��¼�ֶ����֡�
//   �����ǰ��ǰһ����˵��AnsӦ��ȥ��һ��ֵ��
//       ����IV = 5 �C 1��
//   ���򣬽���ǰֵ���뵽����С�
//       ����VI = 5 + 1, II=1+1
int Roman2Int(map<char,int> &Dic, string s)
{
	int Ans=0;
	for(int i = s.size()-1;i >= 0;i--)
	{
		if(i==s.size()-1)
			Ans+=Dic[s[i]];
		else if(Dic[s[i]]>=Dic[s[i+1]]) 
			Ans+=Dic[s[i]];
		else
			Ans-=Dic[s[i]];
	}
	return Ans;
}
int main()
{
	map<char,int> Dic;
	CreateRoman(Dic);
	Output(Dic);
	string s[]={"III","VI","IV","XC", "CXX", "CD", "CDX","CDXC","CDXCIX"};
	//            3     6    4   90    120    400   410    490     499
	for(int i=0; i<9; i++)
		cout<<s[i]<<":"<<Roman2Int(Dic,s[i])<<endl;
	return 0;
}
