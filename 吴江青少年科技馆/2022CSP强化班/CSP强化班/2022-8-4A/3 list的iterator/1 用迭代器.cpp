#include<iostream>
#include<vector>
#include<list>
using namespace std;

void Output(vector<int> &v) 
{
	vector<int>::iterator it;    // ������  ��ȫָ�� 
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
void Output(list<int> &L) 
{
	// L[0];  �������±�������� 
	cout<<L.size()<<endl;
	list<int>::iterator it;    // ������  ��ȫָ�� 
	for(it=L.begin(); it!=L.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}

int main()
{
	list<int> L;
	for(int x=1; x<10; x++)
		L.push_back(x);
	Output(L);
	return 0;
}

