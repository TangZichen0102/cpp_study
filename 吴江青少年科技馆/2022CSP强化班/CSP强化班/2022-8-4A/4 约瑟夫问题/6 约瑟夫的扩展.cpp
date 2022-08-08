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
��8���� 8 9                     7 4 2 1 3 6 10 5
��9���� 9                       7 4 2 1 3 6 10 5 8
*/
void Output(vector<int> &L) 
{
	vector<int>::iterator it;
	for(it=L.begin(); it!=L.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}

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

vector<int>  Joseph(int n,  int ks[],int kn)
{
	vector<int> ans(n);
	list<int> L;
	for(int x=1; x<=n; x++)
		L.push_back(x);
	// ��n��Ȧ
	list<int>::iterator it=L.begin();
	for(int i=0; i<n; i++) 
	{
		// itǰ������k-1����		
		for(int j=0; j<ks[i%kn]-1; j++)   
		{
			it++;
			if(it==L.end())	it=L.begin();
		}
		ans[i] = *it;  // ������ 
		// ������һ��
		list<int>::iterator nextit=it; 
		nextit++;
		if(nextit==L.end())	nextit=L.begin();
		// ɾ�� *it 
		L.erase(it);   // ɾ����*it   
		it=nextit;
	}
	return ans;
}

int main()
{
	int n=10;
	int ks[]={7,5,3,6}, kn=4; 
	vector<int> ans=Joseph(n, ks,kn);
	Output(ans);
	return 0;
}

