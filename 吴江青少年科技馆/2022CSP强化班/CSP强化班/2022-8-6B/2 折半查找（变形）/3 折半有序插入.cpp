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

// ����������v[0]...v[n-1]�У����ҵ�һ����x��������±�
// [left   mid  right]
//          X                      -��[left, mid] 
int BinSearch(vector<int> &v, int x)
{
	int left=0, right=v.size()-1;
	while( left<right )    //  û�еȺţ�һ��������Ҳ��� 
	{
		int mid=(left+right)/2;
		if(v[mid]>x)
			right=mid;        //  ������[left, mid-1]
		else
			left=mid+1;       //  ������[mid+1, right]
	}
	if(v[left]>x) 
		return left;  // �ҵ��� 
	return v.size();  // û���ҵ�	 
}

void BinInsert(vector<int> &v,int x)
{
	int k=BinSearch(v,x);  //�ҵ�һ����x��������±�
	v.insert(v.begin()+k, x);  // ��λ�����������ܼ��� 
}
int main()
{
	int a[]={11,22,33,44,55,66,77,88,99},n=9;  
	vector<int> v(a,a+n);  
	for(int x=10; x<110; x+=10)
	{
		BinInsert(v,x) ;
		Output(v);
	}
	return 0;
}





