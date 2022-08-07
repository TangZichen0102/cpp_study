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
//     99  103
int BinSearch(vector<int> &v, int x)
{
	int left=0,right=v.size()-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(v[mid]==x)
			return mid;
		if(v[mid]<x)
			left =mid+1;
		else
			right=mid-1;
	}
	//cout<<left<<"  "<<right <<endl;  // ������ֵ��9 8 
	//cout<<left<<"  "<<right <<endl;  // ��С��ֵ��0 -1
	if( left==v.size() ) 	return right;
	if( right==-1       ) 	return left;
	if( x-v[right] <= v[left]-x )
		return right; 
	else
		return left; 
}
void SearchK(vector<int> &v, int x, int k)
{
	int index=BinSearch(v, x);  
	int i=index, j=index+1;    // ���i  �Ҳ�j  Խ��???
	if(j==v.size())  i--,j--;
	while( k>0 )
	{
		if(x-v[i] <= v[j]-x)  // iԽ��
		{
			cout<<v[i]<<" "; i--;
		}
		else
		{
			cout<<v[j]<<" "; j++;   // jԽ��
		}
		k--;
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





