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
void Invert(vector<int> &v, int left, int right) 
{
	while(left<right)
	{
		swap(v[left], v[right]);
		left++, right--;
	}
}

// 1,2,3,4,5,6,7,8,9
// 9,8,7,6,5,4,3,2,1    ȫ������ 
// 5,6,7,8,9,1,2,3,4    ���� �ֲ����� 
// ʱ�临�Ӷ�O(n) 
void Moves(vector<int> &v, int k)
{
	int n=v.size();
	Invert(v, 0,n-1);     // ȫ������ 
	Invert(v, 0, n-k-1);  // ǰ������� 
	Invert(v, n-k, n-1);  // �������� 
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

