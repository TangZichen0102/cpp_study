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
// 1,2,3,4,5,6,7,8,9
// 5,6,7,8,9,1,2,3,4, 
// n=100000   Ч�������ߣ� 
void Moves(vector<int> &v, int k)
{
	for(int i=0; i<k; i++)
	{
		vector<int>::iterator it = v.begin();
		int x=*it;		v.erase(it);
		v.push_back(x);
	}
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9},n=9;  
	vector<int> v(a,a+n);   //��ʼ�� 
	int k=4;   // ѭ����λk�� 
	Moves(v,k);
	Output(v);
	return 0;
}

