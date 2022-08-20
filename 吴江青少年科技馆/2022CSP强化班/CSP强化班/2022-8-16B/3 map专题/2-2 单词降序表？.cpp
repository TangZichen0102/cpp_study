#include <iostream> 
#include <iomanip> 
#include <map>    // ӳ��   ��ͼ 
using namespace std;

void Output(map<string,int> &M)
{
	for(map<string,int>::iterator it=M.begin(); it!=M.end(); it++)
		cout<< it->first<<" "<<it->second<<endl;
	cout<<endl;
}

void Test2()
{
	string  word[]={"����","����","����","����","����", 
	                "����","����","����","����","����","����"};  
	int n=11;
	map<string, int> M;
	for(int i=0; i<n; i++)
		M[ word[i]  ]++;
	Output(M);
}

int main()
{
	Test2(); 
	return 0;
}

