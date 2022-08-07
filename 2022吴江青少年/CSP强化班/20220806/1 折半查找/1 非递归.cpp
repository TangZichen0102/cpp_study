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

int BinSearch(vector<int> &v, int left,int right, int x)
{
	//  ������[left, right]  
	while( left<=right )    //  û�еȺţ�һ��������Ҳ��� 
	{
		int mid=(left+right)/2;
		if(v[mid]==x)
			return mid;
		if(v[mid]>x)
			right=mid-1;       //  ������[left, mid-1]
		else
			left=mid+1;       //  ������[mid+1, right]
	}
	return -1;
}

int main()
{
	int a[]={11,22,33,44,55,66,77,88,99},n=9;  
	vector<int> v(a,a+n);   //��ʼ�� 
//	int k=BinSearch(v, x);
	// �ںв��Է� 
	for(int i=0; i<n; i++) 
	{
		int k=BinSearch(v, 0,n-1, v[i]);
		cout<<v[i]<<":  "<<k<<endl;
	}
	return 0;
}


