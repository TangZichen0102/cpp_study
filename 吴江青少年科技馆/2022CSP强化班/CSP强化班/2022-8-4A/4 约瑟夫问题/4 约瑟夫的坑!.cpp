#include<iostream>
#include<vector>
#include<list>
using namespace std;
/*  n=10  k=7
��ʼ��  1 2 3 4 5 6 7 8 9 10
��1���� 1 2 3 4 5 6 8 9 10      7
��2���� 1 2 3 5 6 8 9 10        7 4
��3���� 1 3 5 6 8 9 10          7 4 2
��4���� 3 5 6 8 9 10            7 4 2 1           ͷɾ�� 
��5���� 5 6 8 9 10              7 4 2 1 3
��6���� 5 8 9 10                7 4 2 1 3 6
��7���� 5 8 9                   7 4 2 1 3 6 10    βɾ�� 
*/
void Output(list<int> &L) 
{
	list<int>::iterator it;
	for(it=L.begin(); it!=L.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
// ѭ����m���� 
void Output(list<int> &L, int m) 
{
	list<int>::iterator it=L.begin();
	for(int i=0; i<m; i++)   
	{
		cout<<*it<<"  ";
		it++;
		if(it==L.end())
			it=L.begin();
	}
	cout<<endl;	
}

void Joseph(int n,int k)
{
	list<int> L;
	for(int x=1; x<=n; x++)
		L.push_back(x);
	// ��n��Ȧ
	list<int>::iterator it=L.begin();
	for(int i=0; i<n; i++) 
	{
		// itǰ������k-1����		
		for(int j=0; j<k-1; j++)   
		{
			it++;
			if(it==L.end())	it=L.begin();
		}
		cout<<*it<<"  ";
		// ɾ�� *it 
		L.erase(it);   // ɾ����*it 
		it++;          //  it�Ѿ���Ч�������� 
	}
}

int main()
{
	int n=10,k=7; 
	Joseph(n,k);
	return 0;
}

