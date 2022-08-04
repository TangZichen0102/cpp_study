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
// 1,2,3,4,5,6,7,8,9
// 5,6,7,8,9,1,2,3,4, 
// n=100000   效率如何提高？ 
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
	vector<int> v(a,a+n);   //初始化 
	int k=4;   // 循环移位k次 
	Moves(v,k);
	Output(v);
	return 0;
}

