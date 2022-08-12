#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <stack> 
using namespace std;
/*
5����ѡ3������ѡ���� 
    1 2 3 4 5 
    1 2 3�� 6�� 
    1 2 4�� 6�� 
    1 2 5�� 6�� 
    1 3 4�� 6�� 
    1 3 5�� 6�� 
    1 4 5�� 6�� 
    
	2 3 4�� 6�� 
    2 3 5�� 6�� 
    2 4 5�� 6�� 
    
	3 4 5�� 6�� 
*/
void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
int  Search(vector<int> &v, int x)
{
	for(int i=0; i<v.size(); i++)
		if(v[i]==x)
			return i;
	return -1;
}
int cnt=0;
// ��a[0]...a[n-1]��ѡk����,����b��
// �˿̣����ھ�����ith������˭ 
void Solve(int a[],int n,int k, int ith, vector<int> &b)
{
	if(ith==k) 
	{
		cnt++;   cout<<cnt<<":  ";
		Output(b);   // ���շ���
	}
	else
	{
		// �ֽ���� :���ھ�����ith������˭ 
		for(int i=0; i<n; i++)
		{
			if( Search(b,a[i])!=-1 )  continue;  // �����ظ��� 
			if( b.empty()==false && b.back() > a[i] )  continue;  // ��֤����
			b.push_back(a[i]);
			Solve(a,n,k, ith+1, b);
			b.pop_back();
		}
	}
}

int main()
{
	int a[]={1,2,3,4,5}, n=5, k=3;
	vector<int> b;
	Solve(a,n,k, 0, b);
	return 0;
}





