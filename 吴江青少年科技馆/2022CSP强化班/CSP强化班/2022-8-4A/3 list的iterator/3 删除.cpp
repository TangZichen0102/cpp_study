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
	int a[]={1,2,3,4,5,6,7,8,9} , n=9;
	list<int> L(a, a+n);
	Output(L);
	L.pop_back();   Output(L);   // βɾ�� 
	L.pop_front();  Output(L);   // ͷɾ��
	// �м�ɾ��
	list<int>::iterator it=L.begin();	
	it++;
	L.erase(it);    Output(L);
	L.erase(it);    Output(L);   // it��Ч��������ǰ�жϣ� 
	return 0;
}




