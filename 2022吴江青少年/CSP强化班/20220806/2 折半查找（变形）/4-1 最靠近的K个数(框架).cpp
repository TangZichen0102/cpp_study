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

// ����������v[0]...v[n-1]�У��������x�����±�
int BinSearch(vector<int> &v, int x)
{

}
void SearchK(vector<int> &v, int x, int k)
{
	int index=3; // BinSearch(v, x);  
	int i=index, j=index+1;    // ���i  �Ҳ�j  Խ��???
	while( j-i+1<k )
	{
		if(x-v[i] <= v[j]-x)  // iԽ��
		{
			cout<<v[i]<<" "; i--;
		}
		else
		{
			cout<<v[j]<<" "; j++;   // jԽ��
		}
	}
}

int main()
{
	int a[]={2,4,6,8,10,12,14,16},n=8;  int x=9, k=4;  
	//int a[]={2,4,6,8,10,14,14,16},n=8;  int x=9, k=4; 
	vector<int> v(a,a+n);
	SearchK(v,  x,  k);
	return 0;
}





