#include<iostream>
#include<vector>
using namespace std;

void Output(vector<int> &v) 
{
	vector<int>::iterator it;    // 迭代器  安全指针 
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}

// 在升序序列v[0]...v[n-1]中，查找最靠近x数的下标
int BinSearch(vector<int> &v, int x)
{

}
void SearchK(vector<int> &v, int x, int k)
{
	int index=3; // BinSearch(v, x);  
	int i=index, j=index+1;    // 左侧i  右侧j  越界???
	while( j-i+1<k )
	{
		if(x-v[i] <= v[j]-x)  // i越界
		{
			cout<<v[i]<<" "; i--;
		}
		else
		{
			cout<<v[j]<<" "; j++;   // j越界
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





