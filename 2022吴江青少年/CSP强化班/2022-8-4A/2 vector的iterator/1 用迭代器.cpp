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

int main()
{
	vector<int> v;
	for(int x=1; x<10; x++)
		v.push_back(x);
	Output(v);
	return 0;
}

