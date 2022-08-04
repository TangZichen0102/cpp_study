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
	Output(L);    // 1 2 3 4 5 6 7 8 9
	for(int x=1; x<10; x++)
		L.push_front(x);  // 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9
	Output(L);
	list<int>::iterator it=L.begin();
	for(int i=0; i<5; i++)	it++;  // ֻ��С��Ų�����ܴ󲽿� 
	L.insert(it, 99);    // �м���� 
	Output(L);
	return 0;
}




