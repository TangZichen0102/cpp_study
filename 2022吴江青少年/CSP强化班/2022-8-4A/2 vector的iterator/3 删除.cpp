#include<iostream>
#include<vector>
using namespace std;

void Output(vector<int> &v) 
{
	vector<int>::iterator it;    // ������  ��ȫָ�� 
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}

int main()
{
	vector<int> v;
	for(int x=1; x<10; x++)
		v.push_back(x);
	Output(v);
	vector<int>::iterator it = v.begin();
	v.erase(it);	Output(v);
	v.erase(it);	Output(v);
	it = v.begin()+3;
	v.erase(it);	Output(v);
	return 0;
}

