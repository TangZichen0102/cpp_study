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

// ����x�ĵ�ֵ�������߽� 
// [left, mid, right] 
//         x             => [mid,right] 
int SearchRight(vector<int> &v, int left,int right, int x)
{
	while( left<right )   
	{
		cout<<left<<" "<<right <<endl;
		int mid=(left+right+1)/2;
		if(v[mid]==x)
			left=mid;  
		else
			if(v[mid]>x)
				right=mid-1;  
			else
				left=mid+1;   
	}
	if(v[right]==x) 
		return right;
	return -1;
}

int main()
{
	int a[]={22,22,22,22,33,33,77,88,99},n=9;  
	vector<int> v(a,a+n);   //��ʼ�� 
	int x=22;
	int k=SearchRight(v, 0,n-1, x); 
	cout<<k<<endl;
	return 0;
}


