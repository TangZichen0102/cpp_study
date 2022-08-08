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
//  vector �� ֱ�Ӷ�д 
//  list   �� ����ɾ��������Ҫ��λ 
void  Test1()
{
	int n=100000000;
	vector<int> v;
	for(int x=0; x<n; x++)
		v.push_back(x); 
}
void  Test2()
{
	int n=100000000;
	vector<int> v(n);
	for(int x=0; x<n; x++)
		v[x]=x; 
}
void  Test3()
{
	int n=100000000;
	list<int> L;
	for(int x=0; x<n; x++)
		L.push_back(x); 
}
int main()
{
	//Test1();   // 0.82s ���������ɴεĿռ�, 1�ڴεĸ�ֵ�����ɴεİ�Ǩ 
	//Test2();   // 0.51s ������1�εĿռ� , 1�ڴεĸ�ֵ
	//Test3();   // 8.7s  ������1�ڴεĿռ� , 1�ڴεĸ�ֵ 
	return 0;
}





